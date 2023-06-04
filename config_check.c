/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:28:52 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 10:50:09 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	_check_unique(const t_arr *cfg, t_elem_id eid)
{
	t_elem	*el;
	int		got;
	size_t	i;

	got = 0;
	i = -1;
	while (++i < cfg->nelem)
	{
		el = (t_elem *) ft_arr_get(cfg, i);
		if (el->id == eid)
		{
			if (got)
				return (0);
			got = 1;
		}
	}
	return (1);
}

int	config_check(void)
{
	t_arr	*cfg;

	cfg = config();
	if (cfg->nelem == 0)
		return (0 * error("Empty configuration file?", 0));
	if (!_check_unique(cfg, eid_A))
		return (0 * error("Duplicate Ambient Lightning settings", 0));
	if (!_check_unique(cfg, eid_C))
		return (0 * error("Duplicate Camera settings", 0));
	if (!_check_unique(cfg, eid_L))
		return (0 * error("Duplicate Light settings", 0));
	return (1);
}
