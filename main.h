/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:38:58 by pmarquis          #+#    #+#             */
/*   Updated: 2023/06/04 22:28:51 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <libft.h>
# include <ft_arr.h>
# include <ft_getnext.h>
# include <ft_printf.h>
# include "minilibx_opengl/mlx.h"

# define WIN_W 1400
# define WIN_H 800
# define ASPECT_RATION 1.777778

/*
 *	Color (r, g, b)
 */
typedef struct s_color
{
	int	r;
	int	g;
	int	b;
}	t_color;

/*
 *	Coordinates (x, y, z)
 */
typedef struct s_coord
{
	double	x;
	double	y;
	double	z;
}	t_coord;

/*
 *	- normalized normal vector
*/
typedef struct s_coord	t_vector;

/*
 *	Ambient lightning
 *	- ambient lightning ratio in range [0.0; 1.0]
 *	- color
 */
typedef struct s_elem_A
{
	double	ratio;
	t_color	color;
}	t_elem_A;

/*
 *	Camera
 *	- coords
 *	- orientation vector in range [-1.0, 1.0]
 *	- fov in degrees [0;180]
 */
typedef struct s_elem_C
{
	t_coord	coord;
	t_coord	orient;
	int		fov;
}	t_elem_C;

/*
 *	Light
 *	- coords
 *	- brightness in range [-1.0, 1.0]
 *	- color
 */
typedef struct s_elem_L
{
	t_coord	coord;
	double	bright;
	t_color	color;
}	t_elem_L;

/*
 *	Plane
 *	- coords
 *	- 3d norm. normal vector in range [-1, 1]
 *	- color
 */
typedef struct s_elem_pl
{
	t_coord		coord;
	t_vector	vector;
	t_color		color;
}	t_elem_pl;

/*
 *	Sphere
 *	- coord
 *	- diameter
 *	- color
*/
typedef struct s_elem_sp
{
	t_coord	coord;
	double	diameter;
	t_color	color;
}	t_elem_sp;

/*
 *	Cylinder
 *	- coord
 *	- 3d normalized vector in range [-1, 1]
 *	- diameter
 *	- height
 *	- color
*/
typedef struct s_elem_cy
{
	t_coord		coord;
	t_vector	vector;
	double		diameter;
	double		height;
	t_color		color;
}	t_elem_cy;

/*
 *	Element id
 */
typedef enum e_elem_id
{
	eid_A,
	eid_C,
	eid_L,
	eid_pl,
	eid_sp,
	eid_cy
}	t_elem_id;

/*
 *	Element
 */
typedef struct s_elem
{
	t_elem_id	id;
	union u_elem
	{
		t_elem_A	a;
		t_elem_C	c;
		t_elem_L	l;
		t_elem_pl	pl;
		t_elem_sp	sp;
		t_elem_cy	cy;
	}	elem;
}	t_elem;

/*
 *	Image
 *	- image pointer
 *	- image address
 *	- bits per pixel
 *	- line length
 *	- endian
 *	- background color
*/
typedef struct s_image
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	t_color	color;
}	t_image;

/*
 *	Functions (from A to z)
 */

t_arr	*config(void);
int		config_check(void);
void	enomem(void);
int		error(const char *msg, const char *arg);
int		load_a(char *info, int lineno);
int		load_c(char *info, int lineno);
int		load_l(char *info, int lineno);
int		load_pl(char *info, int lineno);
int		load_sp(char *info, int lineno);
int		load_cy(char *info, int lineno);
char	*scan_color(char *s, t_color *clr);
char	*scan_coord(char *s, t_coord *coord);
int		verror(const char *format, ...);

# ifndef NDEBUG

void	config_debug(void);

# endif

#endif
