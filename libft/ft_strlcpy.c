/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 04:54:08 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 00:17:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of BSD `strlcpy`. Don't use.
 *	\see	man 3 strlcpy
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	sz;
	size_t	tot;

	tot = ft_strlen(src);
	if (!size)
		return (tot);
	sz = size;
	while (*src && --sz)
		*dst++ = *src++;
	*dst = 0;
	if (!sz)
		return (tot);
	return (size - sz);
}
