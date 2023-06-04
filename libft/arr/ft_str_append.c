/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:31:16 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/27 01:03:31 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

int	ft_str_append(t_str *s, const char *suffix)
{
	const size_t	sz = ft_strlen(suffix);

	if (!sz)
		return (1);
	if (!ft_arr_reserve(s, s->nelem + sz))
		return (0);
	while (*suffix)
	{
		if (!ft_arr_append(s, (char *) suffix++, 0))
			return (0);
	}
	return (1);
}
