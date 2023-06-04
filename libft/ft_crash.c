/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_crash.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:20:58 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 00:17:55 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Just crash the program.
 */
int	ft_crash(void)
{
	char	*p;

	assert(0);
	p = 0;
	*p = 0;
	return (0);
}
