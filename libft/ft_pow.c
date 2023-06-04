/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 14:31:56 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/05 17:45:04 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Calculate the power of an integer.
 *	\param[in] a	The integer.
 *	\param[in] x	The exposant.
 *	\return			The result.
 *	\note			Dont overflow...
 */
double	ft_pow(int a, int x)
{
	double	b;
	int		i;

	if (!x)
		return (1);
	i = 0;
	if (x > 0)
	{
		b = a;
		while (++i < x)
			b *= a;
	}
	else
	{
		b = 1;
		while (--i >= x)
			b /= a;
	}
	return (b);
}

