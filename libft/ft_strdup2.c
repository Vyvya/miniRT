/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 06:32:28 by pmarquis          #+#    #+#             */
/*   Updated: 2023/03/01 00:17:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief	Like `strdup`, with a second parameter.
 *	\param[in] s	The string to duplicate.
 *	\param[out] ret	Address to store the new string.
 *	\return			The new string, or null on memory error.
 */
char	*ft_strdup2(const char *s, char **ret)
{
	*ret = ft_strdup(s);
	return (*ret);
}
