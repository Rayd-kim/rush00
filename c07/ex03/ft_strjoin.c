/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:09:10 by youskim           #+#    #+#             */
/*   Updated: 2021/10/23 20:50:19 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	str_len(char *str)
{
	int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

/*
int	total_strs(int size, char **strs)
{
	int	a;
	int	count;

	count = 0;
	a = 0;
	while (a < size)
	{
		count = count + str_len(strs[a]);
		a++;
	}
	return (count);
}
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*arr;
	int	i;
	int	k;
	int	t;
	int	total;
	int	a;

	if (size == 0)
	{
		arr = (char*)malloc(sizeof(char) * size);
		if (arr == 0)
			arr[0] = '\0';
		return (arr);
	}
	total = 0;
	a = 0;
	while (a < size)
	{
		total = total + str_len(strs[a]);
		a++;
	}
	arr = (char*)malloc(sizeof(char) * (total + (size - 1) * str_len(sep)) + 1);
	if (arr == 0)
		return (0);
	i = 0;
	k = 0;
	while (i < size)
	{
		t = 0;
		while (strs[i][t])
		{
			arr[k] = strs[i][t];
			k++;
			t++;
		}
		t = 0;
		while (sep[t] && i != size - 1)
		{
			arr[k] = sep[t];
			k++;
			t++;
		}
		i++;
	}
	arr[k] = '\0';
	return (arr);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(ac, av, av[ac - 1]));
	return 0;
	}
