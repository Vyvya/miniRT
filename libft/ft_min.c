/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 03:10:38 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 22:25:25 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Get the minimum of two integers.
 *	\param[in] a	An integer.
 *	\param[in] b	Another integer.
 *	\return			The lowest of `a` or `b`.
 */
int	ft_min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}

/**
 *	\brief			Get the minimum of two long integers.
 *	\param[in] a	A long integer.
 *	\param[in] b	Another long integer.
 *	\return			The lowest of `a` or `b`.
 */
long	ft_lmin(long a, long b)
{
	if (a <= b)
		return (a);
	return (b);
}

/**
 *	\brief			Get the minimum of two unsigned long integers.
 *	\param[in] a	An unsigned  long integer.
 *	\param[in] b	Another unsigned long integer.
 *	\return			The lowest of `a` or `b`.
 */
t_ulong	ft_ulmin(t_ulong a, t_ulong b)
{
	if (a <= b)
		return (a);
	return (b);
}
