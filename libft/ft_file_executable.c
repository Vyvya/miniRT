/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_executable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:35:28 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:19:07 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Check to see if a path string actually is executable.
 *	\param[in] path		Path string.
 *	\return				1 if the path is executable, or 0 if not.
 */
int	ft_file_executable(const char *path)
{
	if (access(path, X_OK) == -1)
	{
		errno = 0;
		return (0);
	}
	return (1);
}
