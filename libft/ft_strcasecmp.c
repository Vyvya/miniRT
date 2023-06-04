/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:05:46 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 23:04:52 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strcasecmp`.
 *	\see	man 3 strcasecmp
 */
int	ft_strcasecmp(const char *s1, const char *s2)
{
	while (*s1 && (ft_tolower(*s1) == ft_tolower(*s2)))
	{
		++s1;
		++s2;
	}
	return (ft_tolower(*s1) - ft_tolower(*s2));
}
