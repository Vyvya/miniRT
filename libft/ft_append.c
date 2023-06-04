/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:04:19 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 18:59:36 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief				Append text to a heap-allocated string.
 *	\param[in,out] sp	Pointer to string to modify.
 *	\param[in] suffix	Some text to append.
 *	\return				The string, or null on memory error.
 */
char	*ft_append(char **sp, const char *suffix)
{
	char	*p;
	char	*s;
	char	*p2;

	assert(*sp);
	if (!*suffix)
		return (*sp);
	p = ft_malloc(sizeof(char) * (ft_strlen(*sp) + ft_strlen(suffix) + 1));
	if (!p)
	{
		ft_free(*sp);
		*sp = 0;
		return (0);
	}
	p2 = p;
	s = *sp;
	while (*s)
		*p++ = *s++;
	while (*suffix)
		*p++ = *suffix++;
	*p = 0;
	ft_free(*sp);
	*sp = p2;
	return (*sp);
}
