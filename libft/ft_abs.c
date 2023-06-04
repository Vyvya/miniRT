/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:18:02 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/26 17:30:38 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of the standard `abs` function.
 *	\see	man 2 abs
 */
int	ft_abs(int num)
{
	if (num >= 0)
		return (num);
	return (-(num));
}

/**
 *	\brief	Copy of the standard `labs` function.
 *	\see	man 3 labs
 */
long	ft_labs(long num)
{
	if (num >= 0)
		return (num);
	return (-(num));
}
