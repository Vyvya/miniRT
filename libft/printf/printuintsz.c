/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printuintsz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:30:03 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/05 23:23:27 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_p.h"

int	print_uint_size_t(t_printf *spec, va_list vargs, int *cnt)
{
	char	buf[21];
	char	*s;

	spec->arg.as_size_t = va_arg(vargs, size_t);
	ft_ulltoa(spec->arg.as_size_t, buf);
	if (!ft_strdup2(buf, &s) || !flags_uint(spec, &s))
		return (0);
	return (print_final(s, cnt, spec->fd));
}
