/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:37:53 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 18:58:11 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	\brief		Copy of standard calloc.
 *	\see		man 3 calloc
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ret;
	void			*p;
	register size_t	i;
	const size_t	sz = nmemb * size;

	if (ft_multovf(nmemb, size))
		return (0);
	p = ft_malloc(sz);
	if (!p)
		return (0);
	ret = p;
	i = 0;
	while (i++ < sz)
		*(unsigned char *)p++ = 0;
	return (ret);
}
