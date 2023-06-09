/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:04:15 by pmarquis          #+#    #+#             */
/*   Updated: 2023/04/06 20:11:48 by pmarquis         ###   lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARR_H
# define FT_ARR_H

# include "libft.h"

/*
 *	dynamic array
 */

typedef struct s_arr
{
	size_t	nelem;
	size_t	unit;
	size_t	ncapacity;
	void	*data;
}	t_arr;

t_arr	*ft_arr_new(t_arr **a, size_t nelem, size_t unit);
int		ft_arr_del(t_arr **a, t_fn1 delfunc);

int		ft_arr_init(t_arr *a, size_t nelem, size_t unit);
int		ft_arr_fini(t_arr *a, t_fn1 delfunc);

size_t	ft_arr_len(const t_arr *a);

int		ft_arr_reserve(t_arr *a, size_t nelem);
int		ft_arr_adapt(t_arr *a);

void	*ft_arr_get(const t_arr *a, size_t idx);
void	*ft_arr_set(t_arr *a, void *p, size_t idx, t_fn2 copyfunc);
int		ft_arr_unset(t_arr *a, size_t idx, t_fn1 delfunc);

void	*ft_arr_append(t_arr *a, void *p, t_fn2 copyfunc);
void	*ft_arr_insert(t_arr *a, void *p, size_t idx, t_fn2 copyfunc);
void	*ft_arr_prepend(t_arr *a, void *p, t_fn2 copyfunc);

void	ft_arr_empty(t_arr *a, t_fn1 delfunc);

void	ft_arr_trav(t_arr *a, t_fn1 f);
void	ft_arr_trav2(t_arr *a, t_fn2 f, void *userdata);

/*
 *	dynamic string
 */

typedef t_arr	t_str;

t_str	*ft_str_new(t_str **s, size_t prealloc);
int		ft_str_del(t_str **s);

int		ft_str_init(t_str *s, size_t prealloc);
int		ft_str_fini(t_str *s);

size_t	ft_str_len(const t_str *s);
char	*ft_str_data(const t_str *s);

int		ft_str_append(t_str *s, const char *suffix);
int		ft_str_insert(t_str *s, const char *word, size_t idx);
int		ft_str_prepend(t_str *s, const char *prefix);

#endif
