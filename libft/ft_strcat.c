/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:14:01 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 23:04:52 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strcat`.
 *	\see	man 3 strcat
 */
char	*ft_strcat(char *dest, const char *src)
{
	const char	*ret = dest;

	while (*dest)
		++dest;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return ((char *) ret);
}
