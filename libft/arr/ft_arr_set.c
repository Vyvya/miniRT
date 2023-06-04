/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:21:54 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 20:11:48 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief				Set (replace) an element in the array.
 *	@param[in,out] a	The array.
 *	@param[in] p		Address of the element to put.
 *	@param[in] idx		Index of the element.
 *	@param[in] copyfunc	A function to to copy the element (can be null).
 *	@return				Nothing.
 */
void	*ft_arr_set(t_arr *a, void *p, size_t idx, t_fn2 copyfunc)
{
	void	*dest;

	if (idx >= a->nelem)
		return (0);
	dest = a->data + (idx * a->unit);
	if (dest == p)
		return (dest);
	if (copyfunc)
		(*copyfunc)(dest, p);
	else
		ft_memcpy(dest, p, a->unit);
	return (dest);
}
