/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_shuffle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:33:59 by albaud            #+#    #+#             */
/*   Updated: 2023/10/25 01:59:31 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vlib.h"

void	v_swap(double *a, double *b)
{
	double	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	v_shuffle(t_v *a)
{
	int	i;

	i = -1;
	while (++i < a->size)
		v_swap(&a->arr[i], &a->arr[(int)randint(i, a->size)]);
}
