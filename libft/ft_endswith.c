/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endswith.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:45:35 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:08:14 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief				Determine if a string ends with some text.
 *	\param[in] s		The string to check (should not be empty).
 *	\param[in] suffix	The text to find (should not be empty).
 *	\return				1 if the text was found, 0 if not.
 */
int	ft_endswith(const char *s, const char *suffix)
{
	size_t	sz;

	if (!*s || !*suffix || ft_strlen(s) < ft_strlen2(suffix, &sz))
		return (0);
	while (*s)
		++s;
	while (*suffix)
		++suffix;
	while (sz--)
	{
		if (*--s != *--suffix)
			return (0);
	}
	return (1);
}
