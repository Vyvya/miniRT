/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 02:15:06 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 23:04:23 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strchr`.
 *	\see	man 3 strchr
 */
char	*ft_strchr(const char *s, char c)
{
	if (!c)
	{
		while (*s)
			++s;
		return ((char *) s);
	}
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		++s;
	}
	return (0);
}
