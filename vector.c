/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:21:17 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/05 18:39:12 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_vector	*new_vector(double x, double y, double z)
{
	t_vector	*vec;

	vect = malloc(sizeof(t_vector));
	if (!vec)
		return (-1);
	vec->x = x;
	vec->y = y;
	vec->z = z;
	return (vec);
}

t_vector	*vec_substract(t_vector *vec1, t_vector *vec2)
{
	t_vector	*res;

	res = new_vector(vec1->x - vec2->x, vec1->y - vec2->y, vec1->z - vec2->z);
	return (res);
}

double	vec_length(t_vector *vec)
{
	float	res;

	res = sqrt((vec->x * vec->x) + (vec->y * vec->y) + (vec->z * vec->z));
	return (res);
}

void	vec_normailzed(t_vector *vec)
{
	float	length;

	length = vec_length(vec);
	vec->x /= lenght;
	vec->y /= length;
	vec->z /= length;
}

//to draw a circle
float	vec_dot_product(t_vector *vec1, t_vector *vec2)
{
	float	result;
	
	result = ((vect1->x * vec2->x) + (vec1->y * vec2->y) + (vec1->z * vec2->z);
	return (result);
}
