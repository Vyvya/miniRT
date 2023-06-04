/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcatchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:32:28 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 22:58:14 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief				Append characters to a string.
 *	\param[in,out] s	String to modify.
 *	\param[in] c		Character to append.
 *	\param[in] n		How many characters to append.
 *	\return				The string.
 *	\note		The string must have the required memory for n+1 characters.
 */
char	*ft_strcatchr(char *s, char c, size_t n)
{
	char	*p;

	if (!n)
		return (s);
	p = s;
	while (*p)
		++p;
	while (n--)
		*p++ = c;
	*p = 0;
	return (s);
}
