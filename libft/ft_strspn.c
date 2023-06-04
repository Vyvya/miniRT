/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:42:16 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 21:35:51 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strspn`.
 *	\see	man 3 strspn
 */
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	sz;

	if (!*accept)
		return (0);
	sz = 0;
	while (*s)
	{
		if (!ft_strchr(accept, *s++))
			return (sz);
		++sz;
	}
	return (sz);
}
