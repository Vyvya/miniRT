/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:23:24 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/27 01:01:20 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

t_str	*ft_str_new(t_str **s, size_t prealloc)
{
	return (ft_arr_new(s, prealloc, sizeof(char)));
}
