/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 07:03:08 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 23:04:52 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strcmp`.
 *	\see	man 3 strcmp
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	if (s1 == s2)
		return (0);
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	if (*(unsigned char *)s1 > *(unsigned char *)s2)
		return (1);
	if (*(unsigned char *)s2 > *(unsigned char *)s1)
		return (-1);
	return (0);
}
