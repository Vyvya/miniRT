/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multovf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:17:49 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 22:44:22 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Check if multiplication of size_t integers is overflowing.
 *	\param[in] a	The first size_t integer.
 *	\param[in] b	The second size_t integer.
 *	\return			1 if multiplication overflows, 0 if not.
 */
int	ft_multovf(size_t a, size_t b)
{
	size_t	x;

	x = a * b;
	if (a != 0 && x / a != b)
		return (1);
	return (0);
}
