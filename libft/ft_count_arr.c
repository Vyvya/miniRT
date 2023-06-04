/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:10:22 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 18:55:48 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Count the number of elements in a zero-terminated array of pointers.
 *	\param[in] a	The array.
 *	\return			The number of non-zero pointers in the array.
 */
size_t	ft_count_arr(void *a)
{
	char	**arr;
	size_t	i;

	arr = a;
	i = 0;
	while (arr[i])
		++i;
	return (i);
}
