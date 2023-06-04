/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:11:44 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 21:35:51 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Unsigned long long integer to string conversion.
 *	\param[in] n	The number to convert.
 *	\param[out] ret	Where to store the result (21 bytes).
 *	\return			The resulting string.
 */
char	*ft_ulltoa(unsigned long long n, char ret[21])
{
	char	buf[21];
	char	*p;

	if (!n)
		return (ft_strcpy(ret, "0"));
	buf[20] = 0;
	p = &buf[19];
	while (n)
	{
		*p = '0' + (n % 10);
		n /= 10;
		if (n)
			--p;
	}
	return (ft_strcpy(ret, p));
}

char	*ft_ulltoa_hexx(unsigned long long n, char ret[17])
{
	char		buf[17];
	char		*p;
	const char	h[] = "0123456789ABCDEF";

	if (!n)
		return (ft_strcpy(ret, "0"));
	buf[16] = 0;
	p = &buf[15];
	while (n)
	{
		*p = h[n % 16];
		n /= 16;
		if (n)
			--p;
	}
	return (ft_strcpy(ret, p));
}

char	*ft_ulltoa_hex(unsigned long long n, char ret[17])
{
	char		buf[17];
	char		*p;
	const char	h[] = "0123456789abcdef";

	if (!n)
		return (ft_strcpy(ret, "0"));
	buf[16] = 0;
	p = &buf[15];
	while (n)
	{
		*p = h[n % 16];
		n /= 16;
		if (n)
			--p;
	}
	return (ft_strcpy(ret, p));
}

char	*ft_ulltoa_oct(unsigned long long n, char ret[23])
{
	char		buf[23];
	char		*p;
	const char	h[] = "01234567";

	if (!n)
		return (ft_strcpy(ret, "0"));
	buf[22] = 0;
	p = &buf[21];
	while (n)
	{
		*p = h[n % 8];
		n /= 8;
		if (n)
			--p;
	}
	return (ft_strcpy(ret, p));
}
