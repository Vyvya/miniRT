/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:41:11 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 21:35:51 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strrchr`.
 *	\see	man 3 strrchr
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	c = c % 256;
	start = (char *) s;
	while (*s)
		++s;
	if (!c)
		return ((char *) s);
	while (--s != start - 1)
	{
		if (*s == c)
			return ((char *) s);
	}
	return (0);
}
