/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:18:59 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/27 01:01:20 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

int	ft_str_init(t_str *s, size_t prealloc)
{
	return (ft_arr_init(s, prealloc, sizeof(char)));
}
