/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printuintdec2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:31:24 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/05 23:20:56 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_p.h"

int	print_uint_uint(t_printf *spec, va_list vargs, int *cnt)
{
	char	buf[21];
	char	*s;

	spec->arg.as_uint = va_arg(vargs, unsigned int);
	if (spec->arg.as_uint == 0 && spec->precision && spec->_precision == 0)
		buf[0] = 0;
	else
		ft_ulltoa(spec->arg.as_uint, buf);
	if (!ft_strdup2(buf, &s) || !flags_uint(spec, &s))
		return (0);
	return (print_final(s, cnt, spec->fd));
}
