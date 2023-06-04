/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:32:25 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 18:42:33 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief				Allocate a new array (on the heap).
 *	@param[in,out] a	The array (passed by ref).
 *	@param[in] nelem	Prepare space for 'nelem' elements.
 *	@param[in] unit		Size of one element.
 *	@return				The array, or null on memory error.
 */
t_arr	*ft_arr_new(t_arr **a, size_t nelem, size_t unit)
{
	*a = ft_malloc(sizeof(t_arr));
	if (!*a)
		return (0);
	if (!ft_arr_init(*a, nelem, unit))
	{
		ft_free(*a);
		*a = 0;
		return (0);
	}
	return (*a);
}
