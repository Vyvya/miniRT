/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:47:12 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:27:19 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `memchr` function.
 *	\see	man 3 memchr
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		(void)(unsigned char *)++s;
	}
	return (0);
}
