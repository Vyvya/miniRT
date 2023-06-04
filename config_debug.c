/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config_debug.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:08:07 by pmarquis          #+#    #+#             */
/*   Updated: 2023/06/02 19:56:43 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void	_debug_a(const t_elem *el)
{
	ft_printf("{ id:'A', ratio:'%f', color:'%d,%d,%d' }\n",
		el->elem.a.ratio,
		el->elem.a.color.r, el->elem.a.color.g, el->elem.a.color.b);
}

static void	_debug_c(const t_elem *el)
{
	ft_printf("{ id:'C', coord:'%f,%f,%f', orient:'%f,%f,%f', fov:'%d' }\n",
		el->elem.c.coord.x, el->elem.c.coord.y, el->elem.c.coord.z,
		el->elem.c.orient.x, el->elem.c.orient.y, el->elem.c.orient.z,
		el->elem.c.fov);
}

static void	_debug_l(const t_elem *el)
{
	ft_printf("{ id:'L', coord:'%f,%f,%f', bright:'%f', color:'%d,%d,%d' }\n",
		el->elem.l.coord.x, el->elem.l.coord.y, el->elem.l.coord.z,
		el->elem.l.bright,
		el->elem.l.color.r, el->elem.l.color.g, el->elem.l.color.b);
}

static void	_debug_pl(const t_elem *el)
{
	ft_printf("{ id:'pl', coord:'%f,%f,%f', vector:'%f,%f,%f', color:'%d,%d,%d' }\n",
		el->elem.pl.coord.x, el->elem.l.coord.y, el->elem.l.coord.z,
		el->elem.pl.vector.x, el->elem.pl.vector.y, el->elem.pl.vector.z,
		el->elem.pl.color.r, el->elem.pl.color.g, el->elem.pl.color.b);
}

static void	_debug_sp(const t_elem *el)
{
	ft_printf("{ id:'sp', coord:'%f,%f,%f', diameter:'%f', color:'%d,%d,%d' }\n",
		el->elem.sp.coord.x, el->elem.sp.coord.y, el->elem.sp.coord.z,
		el->elem.sp.diameter,
		el->elem.sp.color.r, el->elem.sp.color.g, el->elem.sp.color.b);
}

static void	_debug_cy(const t_elem *el)
{
	ft_printf("{ id:'cy', coord:'%f,%f,%f', vector:'%f,%f,%f', diameter:'%f',  height:'%f', color:'%d,%d,%d' }\n",
		el->elem.cy.coord.x, el->elem.cy.coord.y, el->elem.cy.coord.z,
		el->elem.cy.vector.x, el->elem.cy.vector.y, el->elem.cy.vector.z,
		el->elem.cy.diameter,
		el->elem.cy.height,
		el->elem.cy.color.r, el->elem.cy.color.g, el->elem.cy.color.b);
}

void	config_debug(void)
{
	t_arr	*cfg;
	size_t	i;
	t_elem	*el;

	cfg = config();
	i = -1;
	while (++i < cfg->nelem)
	{
		el = (t_elem *) ft_arr_get(cfg, i);
		if (el->id == eid_A)
			_debug_a(el);
		else if (el->id == eid_C)
			_debug_c(el);
		else if (el->id == eid_L)
			_debug_l(el);
		else if (el->id == eid_pl)
			_debug_pl(el);
		else if (el->id == eid_sp)
			_debug_sp(el);
		else if (el->id == eid_cy)
			_debug_cy(el);		
	}
}
