/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_directory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:15:29 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:18:18 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Check to see if a path string actually is a directory.
 *	\param[in] path		Path string.
 *	\return				1 if the path is a directory, or 0 if not.
 */
int	ft_file_directory(const char *path)
{
	struct stat	sstat;

	if (stat(path, &sstat) == -1)
	{
		errno = 0;
		return (0);
	}
	if (S_ISDIR(sstat.st_mode))
		return (1);
	return (0);
}
