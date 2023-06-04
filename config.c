/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:00:52 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/05 22:03:06 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_arr	*config(void)
{
	static t_arr	*config;

	if (!config)
	{
		if (!ft_arr_new(&config, 0, sizeof(t_elem)))
			enomem();
	}
	return (config);
}
