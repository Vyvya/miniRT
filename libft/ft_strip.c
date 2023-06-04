/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strip.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:51:24 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 00:17:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Remove leading and trailing spaces in a heap-allocated string.
 *	\param[in,out] s	The string to strip.
 *	\return				The modified string.
 *
 *	TODO better
 */
char	*ft_strip(const char *s)
{
	char	*p;
	char	*q;
	char	*end;
	char	*ret;

	p = ft_strdup(s);
	if (!p)
		return (0);
	q = p;
	while (*q && ft_isspace(*q))
		++q;
	end = ft_strchr(p, 0) - 1;
	while (end > q && ft_isspace(*end))
		*end-- = 0;
	ret = ft_strdup(q);
	ft_free(p);
	return (ret);
}
