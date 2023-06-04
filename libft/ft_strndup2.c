/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:48:52 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 00:17:00 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief			Like `strndup`, with a second parameter.
 *	\param[in] s	The string to duplicate.
 *	\param[in] n	How many characters to copy, at most.
 *	\param[out] ret	Address to store the result.
 *	\return			The resulting string, or null on memory error.
 */
char	*ft_strndup2(const char *s, size_t n, char **ret)
{
	*ret = ft_strndup(s, n);
	return (*ret);
}
