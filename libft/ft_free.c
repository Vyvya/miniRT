/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:32:42 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:21:42 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef PREALLOC

void	ft_free(void *ptr)
{
	(void) ptr;
}

#elif !defined( NMEMLIST )

void	ft_free(void *ptr)
{
	t_memlist	**lst;
	t_memlist	*p;
	t_memlist	*prev;

	if (!ptr)
		return ;
	lst = ft_memlist();
	p = *lst;
	prev = 0;
	while (p)
	{
		if (p->data == ptr)
		{
			ft_sllist_take(lst, p, prev);
			free(p);
			return ;
		}
		prev = p;
		p = p->next;
	}
	assert(0);
	ft_crash();
}

#else

/**
 *	\brief	Copy of standard free.
 *	\see	man 3 free
 */
void	ft_free(void *ptr)
{
	free(ptr);
}

#endif
