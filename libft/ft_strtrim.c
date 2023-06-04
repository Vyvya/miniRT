/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:32:45 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 21:27:20 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Create a heap-allocated string, trimmed of a set of characters.
 *	\param[in] s	String to trim.
 *	\param[in] set	Characters to remove.
 *	\return			New string, or null on error.
 */
char	*ft_strtrim(const char *s, const char *set)
{
	size_t	sz;
	char	*start;
	char	*p;

	start = (char *) s;
	while (*start && ft_strchr(set, *start))
		++start;
	if (!*start)
		sz = 0;
	else
	{
		p = start;
		while (*(p + 1) != 0)
			++p;
		while (ft_strchr(set, *p))
			--p;
		sz = p - start + 1;
	}
	p = ft_malloc(sizeof(char) * (sz + 1));
	if (!p)
		return (0);
	*p = 0;
	if (*start)
		ft_strlcpy(p, start, sz + 1);
	return (p);
}
