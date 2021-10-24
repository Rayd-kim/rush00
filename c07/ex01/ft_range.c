/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:35:31 by youskim           #+#    #+#             */
/*   Updated: 2021/10/24 15:41:42 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == 0)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
