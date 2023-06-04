/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_writable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:09:58 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:20:22 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Check to see if a path string actually is writable.
 *	\param[in] path		Path string.
 *	\return				1 if the path is writable, or 0 if not.
 */
int	ft_file_writable(const char *path)
{
	if (access(path, W_OK) == -1)
	{
		errno = 0;
		return (0);
	}
	return (1);
}
