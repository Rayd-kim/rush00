/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:52:18 by youskim           #+#    #+#             */
/*   Updated: 2021/10/25 20:55:10 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (str_len(str) + 1));
	if (dest == 0)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*arr;

	arr = (char *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = str_len(av[ac]);
		arr[i].str = av[ac];
		arr[i].copy = ft_strdup(av[ac]);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].str = 0;
	return (arr);
}
