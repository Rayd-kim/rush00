/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:12:11 by youskim           #+#    #+#             */
/*   Updated: 2021/10/24 15:46:26 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		arr = 0;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == 0)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
