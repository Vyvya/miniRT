/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:29:04 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 21:35:51 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `tolower`.
 *	\see	man 3 tolower
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c ^ (1 << 5));
	return (c);
}
