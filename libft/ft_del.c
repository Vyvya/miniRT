/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:34:45 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 18:58:11 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// delete a pointer passed by reference

/**
 *	\brief	Delete (free) a pointer passed by reference, and set it to null.
 *	\param[in,out] p	A pointer passed by ref.
 */
void	ft_del(void *p)
{
	char	**sp;

	sp = p;
	if (*sp)
	{
		ft_free(*sp);
		*sp = 0;
	}
}
