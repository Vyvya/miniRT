/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_empty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 00:39:08 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 18:58:49 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief				Empty an array.
 *	@param[in,out] a	The array.
 *	@param[in] delfunc	A function to call on each element (can be null).
 *	@return				Nothing at all.
 */
void	ft_arr_empty(t_arr *a, t_fn1 delfunc)
{
	if (a->nelem)
	{
		assert(a->data);
		if (delfunc)
			ft_arr_trav(a, delfunc);
		ft_memset(a->data, 0, a->nelem * a->unit);
		a->nelem = 0;
	}
}
