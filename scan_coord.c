/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_coord.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:12:25 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 11:46:52 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*scan_coord(char *s, t_coord *coord)
{
	s = ft_atod(s, &coord->x);
	if (!s || !(*s++ == ',') || !ft_strchr("-+0123456789", *s))
		return (0);
	s = ft_atod(s, &coord->y);
	if (!s || !(*s++ == ',') || !ft_strchr("-+0123456789", *s))
		return (0);
	s = ft_atod(s, &coord->z);
	if (!s || !(ft_isspace(*s) || !*s))
		return (0);
	return (s);
}
