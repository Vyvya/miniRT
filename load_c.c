/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:01:54 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 10:35:03 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	_check_orient(t_coord *or)
{
	if (or->x < -1 || or->x > 1
		|| or->y < -1 || or->y > 1
		|| or->z < -1 || or->z > 1)
		return (0);
	return (1);
}

int	load_c(char *info, int lineno)
{
	t_elem	el;

	el.id = eid_C;
	info = scan_coord(info, &el.elem.c.coord);
	if (!info)
		return (0 * verror("Invalid C coord (line %d)", lineno));
	info = scan_coord(info, &el.elem.c.orient);
	if (!info || !_check_orient(&el.elem.c.orient))
		return (0 * verror("Invalid C orientation vector (line %d)", lineno));
	info = ft_atoi(info, &el.elem.c.fov);
	if (!info || el.elem.c.fov < 0 || el.elem.c.fov > 180)
		return (0 * verror("Invalid C field of view (line %d)", lineno));
	if (!ft_arr_append(config(), &el, 0))
		enomem();
	while (*info)
		if (!ft_isspace(*info++))
			return (0);
	return (1);
}
