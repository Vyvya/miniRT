/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_pl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:01:54 by pmarquis          #+#    #+#             */
/*   Updated: 2023/06/02 15:23:55 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	load_pl(char *info, int lineno)
{
	t_elem	el;

	el.id = eid_pl;
	info = scan_coord(info, &el.elem.pl.coord);
	if (!info)
		return (0 * verror("Invalid pl coord (line %d)", lineno));
	info = scan_coord(info, &el.elem.pl.vector);
	if (!info)
		return (0 * verror("Invalid pl vector (line %d)", lineno));
	info = scan_color(info, &el.elem.pl.color);
	if (!info)
		return (0 * verror("Invalid pl color (line %d)", lineno));
	if (!ft_arr_append(config(), &el, 0))
		enomem();
	while (*info)
		if (!ft_isspace(*info++))
			return (0);
	return (1);
}
