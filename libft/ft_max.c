/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 03:08:55 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:26:30 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Get the maximum of two integers.
 *	\param[in] a	An integer.
 *	\param[in] b	Another integer.
 *	\return			The highest of `a` or `b`.
 */
int	ft_max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

/**
 *	\brief			Get the maximum of two long integers.
 *	\param[in] a	A long integer.
 *	\param[in] b	Another long integer.
 *	\return			The highest of `a` or `b`.
 */
long	ft_lmax(long a, long b)
{
	if (a >= b)
		return (a);
	return (b);
}

/**
 *	\brief			Get the maximum of two unsigned long integers.
 *	\param[in] a	An unsigned long integer.
 *	\param[in] b	Another unsigned long integer.
 *	\return			The highest of `a` or `b`.
 */
t_ulong	ft_ulmax(t_ulong a, t_ulong b)
{
	if (a >= b)
		return (a);
	return (b);
}
