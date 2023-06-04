/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:24:01 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 00:17:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strndup`.
 *	\see	man 3 strndup
 */
char	*ft_strndup(const char *s, size_t n)
{
	char	*start;
	char	*p;
	char	*ret;

	start = (char *) s;
	while (n-- && *s)
		++s;
	p = ft_malloc(sizeof(char) * (s - start + 1));
	if (!p)
		return (0);
	ret = p;
	while (start != s)
		*p++ = *start++;
	*p = 0;
	return (ret);
}
