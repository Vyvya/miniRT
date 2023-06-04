/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:50:40 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 23:04:52 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			String copying with count of copied characters.
 *	\param[out] dst	Destination string.
 *	\param[in] src	Source string.
 *	\param[in] n	How many chars to copy (at most).
 *	\return			The count of copied characters.
 *
 *	Copy at most `n` chars of `src` to `dst`,
 *	return how many chars were copied (equals result of strlen on `dst`).
 *	`dst` must have n+1 chars, as a terminating zero will be written anyways.
 */
size_t	ft_strccpy(char *dst, const char *src, size_t n)
{
	size_t	sz;

	if (!n)
	{
		*dst = 0;
		return (0);
	}
	sz = n;
	while (n && *src)
	{
		*dst++ = *src++;
		--n;
	}
	*dst = 0;
	return (sz - n);
}
