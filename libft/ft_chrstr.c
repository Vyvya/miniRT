/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:31:20 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 18:54:04 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Create a heap-allocated string full of the same character.
 *	\param[in] c	The character to fill the string with.
 *	\param[in] n	Desired size of the string.
 *	\param[out] ret	Address to store the resulting string.
 *	\return			The string, or null on memory error.
 */
char	*ft_chrstr(char c, size_t n, char **ret)
{
	register size_t	i;
	char			*p;

	p = ft_malloc(sizeof(char) * (n + 1));
	if (!p)
		return (0);
	*ret = p;
	i = 0;
	while (i++ < n)
		*p++ = c;
	*p = 0;
	return (*ret);
}
