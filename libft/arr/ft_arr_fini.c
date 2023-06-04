/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_fini.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:55:17 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 18:50:28 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief				Finalize an array.
 *	@param[in,out] a	The array.
 *	@param[in] delfunc	A function to call on each element (can be null).
 *	@return				Always zero (0).
 */
int	ft_arr_fini(t_arr *a, t_fn1 delfunc)
{
	if (a->data)
	{
		if (delfunc)
			ft_arr_trav(a, delfunc);
		ft_free(a->data);
		a->data = 0;
	}
	a->nelem = 0;
	a->ncapacity = 0;
	return (0);
}
