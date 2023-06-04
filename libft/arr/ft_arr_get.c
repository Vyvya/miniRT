/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 23:04:09 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 18:52:15 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief			Get an element in the array.
 *	@param[in] a	The array.
 *	@param[in] idx	The index of the wanted element.
 *	@return			The address of the element, or null if not found.
 */
void	*ft_arr_get(const t_arr *a, size_t idx)
{
	if (idx >= a->nelem)
		return (0);
	return (a->data + (idx * a->unit));
}
