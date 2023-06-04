/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:21:45 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 21:35:51 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strstr`.
 *	\see	man 3 strstr
 */
char	*ft_strstr(const char *haystack, const char *needle)
{
	const size_t	nlen = ft_strlen(needle);
	size_t			len;

	if (!nlen)
		return ((char *) haystack);
	len = ft_strlen(haystack);
	while (*haystack && len >= nlen)
	{
		if (*haystack == *needle && !ft_strncmp(haystack, needle, nlen))
			return ((char *) haystack);
		++haystack;
		--len;
	}
	return (0);
}
