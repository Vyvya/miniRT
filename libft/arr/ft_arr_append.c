/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:45:53 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 20:19:31 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief				Append an element at the end of the array.
 *	@param[in,out] a	The array.
 *	@param[in] p		Address of the element to append.
 *	@param[in] copyfunc	A function to copy the element (can be null).
 *	@return				Address of the element appended.
 */
void	*ft_arr_append(t_arr *a, void *p, t_fn2 copyfunc)
{
	return (ft_arr_insert(a, p, a->nelem, copyfunc));
}
