/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:44:57 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:15:55 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Get n'th Fibonacci number.
 *	\param[in] n	The rank in the Fibonnaci suite.
 *	\return			Value of the n'th Fibonnaci number (as unsigned long long).
 *	\note			Dont overflow.
 */
t_ullong	ft_fibonacci(size_t n)
{
	if (n < 2)
		return (1ULL);
	return (ft_fibonacci(n - 2) + ft_fibonacci(n - 1));
}
