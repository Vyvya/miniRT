/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_exists.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:09:58 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:19:36 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Check to see if a path string actually exists.
 *	\param[in] path		Path string.
 *	\return				1 if the path exists, or 0 if not.
 */
int	ft_file_exists(const char *path)
{
	if (access(path, F_OK) == -1)
	{
		errno = 0;
		return (0);
	}
	return (1);
}
