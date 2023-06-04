/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:01:54 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 10:33:20 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	load_a(char *info, int lineno)
{
	t_elem	el;

	el.id = eid_A;
	info = ft_atod(info, &el.elem.a.ratio);
	if (!info || el.elem.a.ratio < 0 || el.elem.a.ratio > 1)
		return (0 * verror("Invalid AL ratio (line %d)", lineno));
	info = scan_color(info, &el.elem.a.color);
	if (!info)
		return (0 * verror("Invalid AL color (line %d)", lineno));
	if (!ft_arr_append(config(), &el, 0))
		enomem();
	while (*info)
		if (!ft_isspace(*info++))
			return (0);
	return (1);
}
