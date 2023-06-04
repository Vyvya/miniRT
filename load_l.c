/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_l.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:01:54 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 10:34:03 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	load_l(char *info, int lineno)
{
	t_elem	el;

	el.id = eid_L;
	info = scan_coord(info, &el.elem.l.coord);
	if (!info)
		return (0 * verror("Invalid L coord (line %d)", lineno));
	info = ft_atod(info, &el.elem.l.bright);
	if (!info || el.elem.l.bright < 0 || el.elem.l.bright > 1)
		return (0 * verror("Invalid L brightness ratio (line %d)", lineno));
	info = scan_color(info, &el.elem.l.color);
	if (!info)
		return (0 * verror("Invalid L color (line %d)", lineno));
	if (!ft_arr_append(config(), &el, 0))
		enomem();
	while (*info)
		if (!ft_isspace(*info++))
			return (0);
	return (1);
}
