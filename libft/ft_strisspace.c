/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisspace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:56:14 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 00:17:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Check to see is made of only spaces (blank) characters.
 *	\param[in] s	The string to check.
 *	\return			1 if the string is made of blanks only, 0 if not.
 */
int	ft_strisspace(const char *s)
{
	while (*s)
	{
		if (!ft_isspace(*s++))
			return (0);
	}
	return (1);
}
