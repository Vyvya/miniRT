/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:38:43 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 22:44:22 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `memcpy`.
 *	\see	man 3 memcpy
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;

	if (dst == src || !n)
		return (dst);
	ret = dst;
	while (n--)
		*((unsigned char *)dst++) = *((unsigned char *)src++);
	return (ret);
}
