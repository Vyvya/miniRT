/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:02:22 by pmarquis          #+#    #+#             */
/*   Updated: 2023/06/04 23:05:44 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

typedef struct s_linespec
{
	char	*str;
	int		(*f)(char *, int);
}	t_linespec;

static int	_load_line2(char *id, char *rest, int lineno)
{
	static const t_linespec	specs[] = {
		{"A", &load_a},
		{"C", &load_c},
		{"L", &load_l},
		{"pl", &load_pl},
		{"sp", &load_sp},
		{"cy", &load_cy},
		{0}
	};
	t_linespec				*spec;

	spec = (t_linespec *) &specs[0];
	while (spec->str)
	{
		if (!ft_strcmp(id, spec->str))
		{
			if (!(*spec->f)(rest, lineno))
			{
				ft_free(id);
				return (0);
			}
			else
			{
				ft_free(id);
				return (1);
			}
		}
		++spec;
	}
	verror("Unknown identifier '%s' (line %d)", id, lineno);
	ft_free(id);
	return (0);
}

static int	_load_line(char *line, int lineno)
{
	char	*p;

	if (ft_strisspace(line))
	{
		ft_free(line);
		return (0 * verror("Line %d contains only spaces", lineno));
	}
	if (!ft_isalpha(*line))
	{
		ft_free(line);
		return (0 * verror("Invalid identifier (line %d)", lineno));
	}
	p = line;
	while (*p && ft_isalpha(*p))
		++p;
	if (!*p || !*(p + 1))
	{
		ft_free(line);
		return (0 * verror("Invalid line (%d)", lineno));
	}
	*p = 0;
	return (_load_line2(line, ++p, lineno));
}

static int	_load_config(const char *filename)
{
	int		fd;
	char	*line;
	int		lineno;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0 * error("Cannot open file: ", filename));
	lineno = 0;
	while (1)
	{
		line = ft_getnextline(fd);
		if (!line)
			break ;
		++lineno;
		if (!*line || *line == '#' || !ft_strcmp(line, "\n"))
			ft_free(line);
		else if (!_load_line(line, lineno))
		{
			close(fd);
			return (0);
		}
	}
	close(fd);
	return (config_check());
}

static int	_check_args(int argc, char *argv[])
{
	if (argc != 2)
		return (0 * error("Invalid arguments", 0));
	if (!*argv[1])
		return (0 * error("Empty argument", 0));
	if (!ft_file_exists(argv[1]))
		return (0 * error("File does not exist: ", argv[1]));
	if (!ft_file_readable(argv[1]))
		return (0 * error("File is not readable: ", argv[1]));
	if (!ft_endswith(argv[1], ".rt"))
		return (0 * error("File does not end in '.rt': ", argv[1]));
	return (1);
}

static t_color _color_gradient(t_color *color, int y)
{
	double	percent;

	percent = WIN_H / y;
	// printf("percent: [%f]\n", percent);
	// color->r = (1 - percent) * (((0x000000FF >> 16) & 0xFF) + (0x000000FF & 0xFF));
	color->r = (WIN_H / y) * (((0xff4128 >> 16) & 0xFF) + ((0x7279b3 >> 16)  & 0xFF)); // / (WIN_W - 1)
	color->g = (WIN_H / y) * (((0xff4128 >> 8) & 0xFF) + ((0x7279b3 >> 8) & 0xFF));
	color->b = (WIN_H / y) * (((0xff41288) & 0xFF) + ((0x7279b3) & 0xFF));
	return (*color);
}

static void	_my_mlx_pixel_put(t_image *img, int	x, int y)
{
	char	*dst;
	int		offset;

	offset = y * img->line_length + x * (img->bits_per_pixel / 8);
	dst = img->addr + offset;
	// *(unsigned int*)dst = color;
	*(t_color*)dst = _color_gradient(&img->color, y);
}

int	main(int argc, char *argv[])
{
	void	*mlx;
	void	*mlx_win;
	t_image	img;
	int		x;
	int		y;
	
	x = 0;
	y = 1;
	if (!_check_args(argc, argv)
		|| !_load_config(argv[1]))
		return (1);
	config_debug();
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, WIN_W, WIN_H, "miniRT");
	img.img = mlx_new_image(mlx, WIN_W, WIN_H);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	while (y < (WIN_H - 1))
	{
		while (x < (WIN_W - 1))
		{
			_my_mlx_pixel_put(&img, x, y);
			x++;
		}
		x = 0;
		y++;
	}	
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
	ft_memtrash();
	return (0);
}
