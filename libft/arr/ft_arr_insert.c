/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:54:55 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 20:16:54 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief				Insert an element in the array.
 *	@param[in,out] a	The array.
 *	@param[in] p		Address of the element to insert.
 *	@param[in] idx		Index of the element.
 *	@param[in] copyfunc	A function to copy the element (can be null).
 *	@return				Address of the element inserted.
 */
void	*ft_arr_insert(t_arr *a, void *p, size_t idx, t_fn2 copyfunc)
{
	void	*dest;

	if (idx > a->nelem)
		return (0);
	if (!a->ncapacity || a->nelem == a->ncapacity - 1)
	{
		if (!ft_arr_reserve(a, ft_ulmax(a->ncapacity, 1) * 2))
			return (0);
	}
	dest = a->data + (idx * a->unit);
	ft_memmove(dest + a->unit, dest, (a->nelem - idx) * a->unit);
	if (copyfunc)
		(*copyfunc)(dest, p);
	else
		ft_memcpy(dest, p, a->unit);
	++(a->nelem);
	return (dest);
}
