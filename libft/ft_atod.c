/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 13:46:47 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 18:17:24 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			String to double conversion (approximate).
 *	\param[in] s	A string with a floating-point number.
 *	\param[out] ret	A double to store the result.
 *	\return			Address where the conversion has stopped, or null if the
 *					string could not be converted.
 *	\note			The conversion can be erroneous.
 */
char	*ft_atod(const char *s, double *ret)
{
	int		x;
	char	*p;
	int		neg;

	while (*s && ft_isspace(*s))
		++s;
	neg = 1;
	if (*s == '-')
		neg = -1;
	p = ft_atoi(s, &x);
	if (!p)
		return (0);
	*ret = x;
	if (!*p || *p != '.' || !ft_isdigit(*++p) || !ft_atoi(p, &x))
		return (p);
	if (neg > 0)
		*ret += ((double) x) / ft_pow(10, ft_strspn(p, "0123456789"));
	else
		*ret -= ((double) x) / ft_pow(10, ft_strspn(p, "0123456789"));
	while (ft_isdigit(*p))
		++p;
	return (p);
}
