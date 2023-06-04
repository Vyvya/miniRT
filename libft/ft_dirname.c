/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dirname.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:05:08 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 18:35:58 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Like standard dirname, but thread-safe.
 *	\see	man 3 dirname
 *	\param[in] path		Path string.
 *	\param[out] dname	Address wide-enough to store the result.
 *	\return				The result.
 */
char	*ft_dirname(const char *path, char *dname)
{
	char	*p;

	if (!path || !*path)
		return (ft_strcpy(dname, "."));
	p = (char *) path;
	while (*p)
		++p;
	--p;
	while (*p == '/' && p > path)
		--p;
	if (p == path && *p == '/')
		return (ft_strcpy(dname, "/"));
	while (*p != '/' && p > path)
		--p;
	if (p == path)
	{
		if (*p != '/')
			return (ft_strcpy(dname, "."));
		return (ft_strcpy(dname, "/"));
	}
	ft_strncpy(dname, path, p - path);
	dname[p - path] = 0;
	return (dname);
}
