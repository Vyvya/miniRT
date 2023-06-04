/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:09:51 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 22:44:22 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief				Prepend text to a heap-allocated string.
 *	\param[in,out] sp	Pointer to string to modify.
 *	\param[in] prefix	Some text to prepend.
 *	\return				1 on success, 0 on memory error.
 */
int	ft_prepend(char **sp, const char *prefix)
{
	char	*p;
	char	*s;
	char	*p2;

	if (!*prefix)
		return (1);
	p = ft_malloc(sizeof(char) * (ft_strlen(*sp) + ft_strlen(prefix) + 1));
	if (!p)
	{
		ft_free(*sp);
		*sp = 0;
		return (0);
	}
	p2 = p;
	s = *sp;
	while (*prefix)
		*p++ = *prefix++;
	while (*s)
		*p++ = *s++;
	*p = 0;
	ft_free(*sp);
	*sp = p2;
	return (1);
}
