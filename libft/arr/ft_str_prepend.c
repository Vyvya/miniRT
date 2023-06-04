/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_prepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:33:34 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/27 00:46:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

int	ft_str_prepend(t_str *s, const char *prefix)
{
	size_t	sz;

	if (!*prefix)
		return (1);
	sz = ft_strlen(prefix);
	if (!ft_arr_reserve(s, s->nelem + sz))
		return (0);
	while (sz)
	{
		if (!ft_arr_prepend(s, (char *) &prefix[--sz], 0))
			return (0);
	}
	return (1);
}
