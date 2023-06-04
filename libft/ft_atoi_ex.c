/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:26:12 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 18:26:46 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			String to int conversion, with checks.
 *	\param[in] s	The string to convert.
 *	\param[out] ret	Address to store the result.
 *	\param[in] spec	Bitfield for special checks.
 *	\return			1 on success, 0 on error.
 *
 *	Use of 'spec' param:
 *	\code
 *	spec = 0;	// no special check other than the string must be at the end.
 *	spec |= 1;	// string must be at the end, and the result must not be zero.
 *	spec |= 2;	// string must be at the end, and the result must not be negative.
 *	\endcode
 */
int	ft_atoi_ex(const char *s, int *ret, int spec)
{
	char	*p;

	p = ft_atoi(s, ret);
	if (!p || *p)
		return (0);
	if (spec)
	{
		if ((spec & 1 && *ret == 0) || (spec & 2 && *ret < 0))
			return (0);
	}
	return (1);
}
