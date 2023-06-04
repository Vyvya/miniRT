/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_color.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:38:04 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 11:44:46 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*scan_color(char *s, t_color *clr)
{
	s = ft_atoi(s, &clr->r);
	if (!s || !(*s++ == ',') || !ft_isdigit(*s))
		return (0);
	s = ft_atoi(s, &clr->g);
	if (!s || !(*s++ == ',') || !ft_isdigit(*s))
		return (0);
	s = ft_atoi(s, &clr->b);
	if (!s || !((ft_isspace(*s) || !*s)))
		return (0);
	if (clr->r < 0 || clr->r > 255
		|| clr->g < 0 || clr->g > 255
		|| clr->b < 0 || clr->b > 255)
		return (0);
	return (s);
}
