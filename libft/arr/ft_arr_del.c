/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:34:51 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 18:48:33 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

/**
 *	@brief				Delete an array.
 *	@param[in,out] a	The array (passed by ref).
 *	@param[in] delfunc	A function to call on each element (can be null).
 *	@return				Always zero (0).
 */
int	ft_arr_del(t_arr **a, t_fn1 delfunc)
{
	ft_arr_fini(*a, delfunc);
	ft_free(*a);
	*a = 0;
	return (0);
}
