/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:47:16 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/05 18:09:20 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

int	ft_str_insert(t_str *s, const char *word, size_t idx)
{
	size_t	sz;

	if (idx > s->nelem)
		return (0);
	if (!*word)
		return (1);
	sz = ft_strlen(word);
	if (!ft_arr_reserve(s, s->nelem + sz))
		return (0);
	while (sz)
	{
		if (!ft_arr_insert(s, (char *) &word[--sz], idx, 0))
			return (0);
	}
	return (1);
}
