/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:01:54 by pmarquis          #+#    #+#             */
/*   Updated: 2023/06/02 19:41:15 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	load_sp(char *info, int lineno)
{
	t_elem	el;

	el.id = eid_sp;
	info = scan_coord(info, &el.elem.sp.coord);
	if (!info)
		return (0 * verror("Invalid sp coord (line %d)", lineno));
	info = ft_atod(info, &el.elem.sp.diameter);
	if (!info || el.elem.sp.diameter <= 0)
		return (0 * verror("Invalid sp diameter (line %d)", lineno));
	info = scan_color(info, &el.elem.sp.color);
	if (!info)
		return (0 * verror("Invalid sp color (line %d)", lineno));
	if (!ft_arr_append(config(), &el, 0))
		enomem();
	while (*info)
		if (!ft_isspace(*info++))
			return (0);
	return (1);
}
