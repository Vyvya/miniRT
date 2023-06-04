/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_readable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:09:58 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:20:00 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Check to see if a path string actually is readable.
 *	\param[in] path		Path string.
 *	\return				1 if the path is readable, or 0 if not.
 */
int	ft_file_readable(const char *path)
{
	if (access(path, R_OK) == -1)
	{
		errno = 0;
		return (0);
	}
	return (1);
}
