/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reallocarray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:38:09 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 22:45:55 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef NMEMLIST

/**
 *	\brief	Copy of standard `reallocarray`.
 *	\see	man 3 reallocarray
 */
void	*ft_reallocarray(void *ptr, size_t nmemb, size_t size)
{
	if (ft_multovf(nmemb, size))
		return (0);
	return (ft_realloc(ptr, nmemb * size));
}

#else

void	*ft_reallocarray(void *ptr, size_t nmemb, size_t size, size_t psz)
{
	if (ft_multovf(nmemb, size))
		return (0);
	return (ft_realloc(ptr, nmemb * size, psz));
}

#endif
