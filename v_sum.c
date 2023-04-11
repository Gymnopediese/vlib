/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_sum.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:40:43 by albaud            #+#    #+#             */
/*   Updated: 2023/02/21 10:41:03 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vlib.h"

double	v_sum(t_v *a)
{
	int		i;
	double	sum;

	i = -1;
	sum = 0;
	while (++i < a->size)
		sum += a->arr[i];
	return (sum);
}