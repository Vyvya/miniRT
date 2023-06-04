/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:50:48 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/26 17:53:16 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `isalnum` function.
 *	\see	man 3 isalnum
 */
int	ft_isalnum(int c)
{
	if (ft_isupper(c) || ft_islower(c) || ft_isdigit(c))
		return (1);
	return (0);
}
