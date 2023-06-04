/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_cy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:01:54 by pmarquis          #+#    #+#             */
/*   Updated: 2023/06/02 19:51:53 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	load_cy(char *info, int lineno)
{
	t_elem	el;

	el.id = eid_cy;
	info = scan_coord(info, &el.elem.cy.coord);
	if (!info)
		return (0 * verror("Invalid cy coord (line %d)", lineno));
	info = scan_coord(info, &el.elem.cy.vector);
	if (!info)
		return (0 * verror("Invalid cy vector (line %d)", lineno));
	info = ft_atod(info, &el.elem.cy.diameter);
	if (!info || el.elem.cy.diameter <= 0)
		return (0 * verror("Invalid cy diameter (line %d)", lineno));
	info = ft_atod(info, &el.elem.cy.height);
	if (!info || el.elem.cy.height <= 0)
		return (0 * verror("Invalid cy height (line %d)", lineno));	
	info = scan_color(info, &el.elem.cy.color);
	if (!info)
		return (0 * verror("Invalid cy color (line %d)", lineno));
	if (!ft_arr_append(config(), &el, 0))
		enomem();
	while (*info)
		if (!ft_isspace(*info++))
			return (0);
	return (1);
}
