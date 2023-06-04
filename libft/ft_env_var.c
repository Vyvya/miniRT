/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_var.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:55:13 by pmarquis          #+#    #+#             */
/*   Updated: 2023/02/28 19:32:25 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MAXVARLEN	4096

/**
 *	\brief	Get the address to right after the equal sign of wanted env variable.
 *	\param[in] varname	The variable name.
 *	\param[in] env		The environment array.
 *	\return				Address of string found, or null if not found.
 *
 *	Usage:
 *	\code
 *	const char *value = ft_env_var("PATH", envp);
 *	\endcode
 */
char	*ft_env_var(const char *varname, char *env[])
{
	size_t	vsz;
	char	var[MAXVARLEN];
	size_t	i;

	assert(ft_strlen(varname) <= MAXVARLEN - 2);
	if (!*varname || ft_strlen2(varname, &vsz) > MAXVARLEN - 2 || !env[0])
		return (0);
	ft_strcpy(var, varname);
	if (varname[vsz - 1] != '=')
	{
		var[vsz] = '=';
		var[vsz + 1] = 0;
	}
	i = -1;
	while (env[++i])
	{
		if (ft_startswith(env[i], var))
			return (ft_strchr(env[i], '=') + 1);
	}
	return (0);
}
