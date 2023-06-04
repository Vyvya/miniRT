/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startswith.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:27:56 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 23:04:51 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief				Determine if a string starts with some text.
 *	\param[in] s		The string to check.
 *	\param[in] prefix	The text to find.
 *	\return				1 if the text was found, 0 if not.
 */
int	ft_startswith(const char *s, const char *prefix)
{
	if (!*s || !*prefix)
		return (0);
	while (*prefix && (*prefix == *s))
	{
		++prefix;
		++s;
	}
	if (*prefix)
		return (0);
	return (1);
}
