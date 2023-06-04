/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:15:45 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 18:22:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			String to int conversion.
 *	\param[in] s	The string to convert.
 *	\param[out] ret	Address to store the result.
 *	\return			Address where the conversion stopped, or null on error.
 */
char	*ft_atoi(const char *s, int *ret)
{
	int	i;
	int	neg;

	while (*s && ft_isspace(*s))
		++s;
	neg = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			neg = -1;
		++s;
	}
	if (!ft_isdigit(*s))
		return (0);
	i = 0;
	while (*s && ft_isdigit(*s))
	{
		i *= 10;
		i += *s - '0';
		++s;
	}
	*ret = neg * i;
	return ((char *) s);
}

/**
 *	\brief			String to long conversion.
 *	\param[in] s	The string to convert.
 *	\param[out] ret	Address to store the result.
 *	\return			Address where the conversion stopped, or null on error.
 */
char	*ft_atol(const char *s, long *ret)
{
	long	i;
	int		neg;

	while (*s && ft_isspace(*s))
		++s;
	neg = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s++ == '-')
			neg = -1;
	}
	if (!ft_isdigit(*s))
		return (0);
	i = 0;
	while (*s && ft_isdigit(*s))
	{
		i *= 10;
		i += *s - '0';
		++s;
	}
	*ret = neg * i;
	return ((char *) s);
}

/**
 *	\brief			String to long long conversion.
 *	\param[in] s	The string to convert.
 *	\param[out] ret	Address to store the result.
 *	\return			Address where the conversion stopped, or null on error.
 */
char	*ft_atoll(const char *s, long long *ret)
{
	long long	i;
	int			neg;

	while (*s && ft_isspace(*s))
		++s;
	neg = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s++ == '-')
			neg = -1;
	}
	if (!ft_isdigit(*s))
		return (0);
	i = 0;
	while (*s && ft_isdigit(*s))
	{
		i *= 10;
		i += *s - '0';
		++s;
	}
	*ret = neg * i;
	return ((char *) s);
}
