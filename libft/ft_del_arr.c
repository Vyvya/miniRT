/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_arr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:04:22 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:02:56 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief		Delete (free) a list of pointers, passed by reference.
 *	\param[in,out] p	The array of pointers (null-terminated).
 */
void	ft_del_arr(void *p)
{
	char	***arr;
	size_t	i;

	arr = p;
	if (*arr)
	{
		i = 0;
		while ((*arr)[i])
			ft_free((*arr)[i++]);
		ft_free(*arr);
		*arr = 0;
	}
}
