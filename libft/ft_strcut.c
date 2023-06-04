/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:51:11 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 00:17:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief				Cut a string at a certain length.
 *	\param[in,out] s	The string to shorten.
 *	\param[in] n		The desired length of the string.
 *	\return				The string.
 */
char	*ft_strcut(char *s, size_t n)
{
	if (ft_strlen(s) > n)
		s[n] = 0;
	return (s);
}
