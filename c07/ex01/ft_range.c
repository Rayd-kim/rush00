/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:35:31 by youskim           #+#    #+#             */
/*   Updated: 2021/10/23 15:07:54 by youskim          ###   ########.fr       */
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
	range = (int*)malloc(sizeof(int) * (max - min));
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
int	length(int *str)
{
	int	k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

#include <stdio.h>
int	main()
{
	int	*range = ft_range(1, 6);
	printf("%lu\n", sizeof(range));
	for (int i = 0; i < length(range); i++)
		printf("%d\n", range[i]);
	return (0);
}
