/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_reserve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 06:50:19 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 20:07:18 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

static void	*_realloc(t_arr *a, size_t nelem)
{
	void	*tmp;

	tmp = ft_calloc(nelem + 1, a->unit);
	if (!tmp)
		return (0);
	ft_memcpy(tmp, a->data, a->nelem * a->unit);
	ft_free(a->data);
	return (tmp);
}

/**
 *	@brief				Reserve space for more elements.
 *	@param[in,out] a	The array.
 *	@param[in] nelem	How many elements to reserve space for.
 *	@return				1, or 0 on memory error.
 */
int	ft_arr_reserve(t_arr *a, size_t nelem)
{
	assert(a->unit);
	if (nelem < a->nelem)
		return (0);
	if (nelem > a->ncapacity - 1)
	{
		if (a->data)
			a->data = _realloc(a, nelem);
		else
			a->data = ft_calloc(nelem + 1, a->unit);
		if (!a->data)
			return (0);
		a->ncapacity = nelem + 1;
	}
	assert(a->ncapacity > a->nelem);
	return (1);
}
