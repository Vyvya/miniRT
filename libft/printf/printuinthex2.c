/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printuinthex2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:38:59 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/05 23:21:24 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_p.h"

int	print_size_t_hex(t_printf *spec, va_list vargs, int *cnt)
{
	char	buf[17];
	char	*s;

	spec->arg.as_size_t = va_arg(vargs, size_t);
	ft_ulltoa_hex(spec->arg.as_size_t, buf);
	if (!ft_strdup2(buf, &s) || !flags_uint(spec, &s))
		return (0);
	return (print_final(s, cnt, spec->fd));
}

int	print_uint_uint_hex(t_printf *spec, va_list vargs, int *cnt)
{
	char	buf[17];
	char	*s;

	spec->arg.as_uint = va_arg(vargs, unsigned int);
	if (spec->arg.as_uint == 0 && spec->precision && spec->_precision == 0)
		buf[0] = 0;
	else
		ft_ulltoa_hex(spec->arg.as_uint, buf);
	if (!ft_strdup2(buf, &s) || !flags_uint(spec, &s))
		return (0);
	return (print_final(s, cnt, spec->fd));
}
