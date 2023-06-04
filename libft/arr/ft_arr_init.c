/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:49:07 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 18:46:13 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief				Initialize an array.
 *	@param[in,out] a	The array.
 *	@param[in] nelem	Prepare space for 'nelem' elements.
 *	@param[in] unit		Size of one element.
 *	@return				1, or 0 on memory error.
 *
 *	The array will *always* have a last element filled with zeros,
 *	*not* counted in the `nelem` member.
 */
int	ft_arr_init(t_arr *a, size_t nelem, size_t unit)
{
	assert(unit);
	a->nelem = 0;
	a->unit = unit;
	a->ncapacity = 0;
	a->data = ft_calloc(nelem + 1, unit);
	if (!a->data)
		return (0);
	a->ncapacity = nelem + 1;
	return (1);
}
