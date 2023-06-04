/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_sz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:09:50 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 22:44:22 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Print a string to a stream, with set length.
 *	\param[in] s	String to print.
 *	\param[in] sz	Length to print (in bytes).
 *	\param[in] fd	Opened file descriptor.
 *	\return			1 on success, 0 on error.
 */
int	ft_putstr_sz(const char *s, size_t sz, int fd)
{
	ssize_t	i;

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
