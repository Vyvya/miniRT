/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:06:30 by pmarquis          #+#    #+#             */
/*   Updated: 2023/06/02 13:51:23 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/*java doc cmd, read with doxygen
*/

/**
 *	@brief				Print errors.
 *	@param[in] msg		Message to print.
 *	@param[in] arg		Optional message to print.
 *	@return				Always one (1).
 */
int	error(const char *msg, const char *arg)
{
	assert(*msg);
	ft_putstr("Error\n", STDERR_FILENO);
	ft_putstr(msg, STDERR_FILENO);
	if (arg)
		ft_putstr(arg, STDERR_FILENO);
	ft_putchar('\n', STDERR_FILENO);
	return (1);
}

/**
 *	@brief	Print errors (vararg version).
 */
int	verror(const char *format, ...)
{
	va_list	varg;

	va_start(varg, format);
	ft_vdprintf(STDERR_FILENO, format, varg);
	va_end(varg);
	ft_putchar('\n', STDERR_FILENO);
	return (1);
}

/**
 *	@brief	No memory error (fatal).
 */
void	enomem(void)
{
	error("No memory", 0);
	exit(1);
}
