/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:42:25 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 23:04:51 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_count(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s == c)
		{
			++s;
			continue ;
		}
		++cnt;
		while (*s && *s != c)
			++s;
	}
	return (cnt);
}

static char	**_free(char **ret)
{
	char	**start;

	start = ret;
	while (*ret)
		ft_free(*ret++);
	ft_free(start);
	return (0);
}

/**
 *	\brief	Split a string using a separator character.
 *	\param[in] s	String to split.
 *	\param[in] c	Separator character.
 *	\return			A null-terminated array of strings, or null on memory error.
 */
char	**ft_split(const char *s, char c)
{
	char	**p;
	char	**ret;
	char	*start;

	p = ft_calloc(_count(s, c) + 1, sizeof(char *));
	if (!p)
		return (0);
	ret = p;
	while (*s)
	{
		if (*s == c)
		{
			++s;
			continue ;
		}
		start = (char *) s;
		while (*s && *s != c)
			++s;
		*p = ft_strndup(start, s - start);
		if (!*p)
			return (_free(ret));
		++p;
	}
	*p = 0;
	return (ret);
}
