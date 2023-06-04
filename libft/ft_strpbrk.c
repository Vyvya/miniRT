/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:45:32 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 21:35:51 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strpbrk`.
 *	\see	man 3 strpbrk
 */
char	*ft_strpbrk(const char *s, const char *accept)
{
	char	m[256];

	ft_memset(m, 0, sizeof(char) * 256);
	while (*s)
	{
		if (m[*(unsigned char *)s])
		{
			++s;
			continue ;
		}
		else if (ft_strchr(accept, *s))
			return ((char *) s);
		else
			m[*(unsigned char *)s] = 1;
		++s;
	}
	return (0);
}
