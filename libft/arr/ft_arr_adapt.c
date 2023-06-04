/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_adapt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:21:39 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 18:54:33 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief				Adapt the size of the array (shrink to fit).
 *	@param[in,out] a	The array.
 *	@return				1, or 0 on memory error.
 */
int	ft_arr_adapt(t_arr *a)
{
	void	*tmp;

	if (a->ncapacity != a->nelem + 1)
	{
		tmp = ft_calloc(a->nelem + 1, a->unit);
		if (!tmp)
			return (0);
		ft_memcpy(tmp, a->data, a->nelem * a->unit);
		ft_free(a->data);
		a->data = tmp;
		a->ncapacity = a->nelem + 1;
	}
	return (1);
}
