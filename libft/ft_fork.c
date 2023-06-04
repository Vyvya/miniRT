/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fork.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:51:01 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/26 18:32:28 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	A version of `fork` that is not broken on MacOS.
 *	\param[out] ret	An address to store the result of the fork, or null.
 *	\return			The result of the fork.
 *	\see			man 2 fork
 *
 *	For some reason, `fork` on Mac can set `errno` to non-zero even on success.
 *	On success, this function resets `errno` to zero if it has changed.
 */
pid_t	ft_fork(pid_t *ret)
{
	pid_t	pid;

	assert(errno == 0);
	pid = fork();
	if (ret)
		*ret = pid;
	if (pid == -1)
		return (pid);
	if (errno)
		errno = 0;
	return (pid);
}
