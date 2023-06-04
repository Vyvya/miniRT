/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:25:34 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 22:43:14 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Print a string to a stream.
 *	\param[in] s	String to print.
 *	\param[in] fd	Opened file descriptor.
 *	\return			1 on success, 0 on error.
 */
int	ft_putstr(const char *s, int fd)
{
	ssize_t			i;
	const size_t	sz = ft_strlen(s);

	if (sz)
	{
		i = write(fd, s, sz);
		if (i == -1 || i != (ssize_t) sz)
		{
			errno = 0;
			return (0);
		}
	}
	return (1);
}
