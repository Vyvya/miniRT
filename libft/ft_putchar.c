/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:23:32 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 22:34:59 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Print a character to a stream.
 *	\param[in] c	Character to print.
 *	\param[in] fd	Opened file descriptor.
 *	\return			1 on success, 0 on error.
 */
int	ft_putchar(char c, int fd)
{
	if (write(fd, &c, 1) == -1)
	{
		errno = 0;
		return (0);
	}
	return (1);
}
