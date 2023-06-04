/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:21:57 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 23:04:52 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `stpcpy`.
 *	\see	man 3 stpcpy
 */
char	*ft_stpcpy(char *dst, const char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = 0;
	return (dst);
}
