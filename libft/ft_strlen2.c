/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:40:09 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 21:35:30 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Like `strlen`, with a second parameter.
 *	\param[in] s	String to get length of.
 *	\param[out] sz	Address to store the result.
 *	\return			The result.
 */
size_t	ft_strlen2(const char *s, size_t *sz)
{
	register size_t	z;

	z = 0;
	while (*s++)
		++z;
	*sz = z;
	return (z);
}
