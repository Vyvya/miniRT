/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:44:16 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 00:17:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Copy of standard `strcspn`.
 *	\see	man 3 strcspn
 */
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	sz;

	if (!*reject)
		return (ft_strlen(s));
	sz = 0;
	while (*s)
	{
		if (ft_strchr(reject, *s++))
			return (sz);
		++sz;
	}
	return (sz);
}
