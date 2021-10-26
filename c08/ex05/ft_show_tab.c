/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:37:30 by youskim           #+#    #+#             */
/*   Updated: 2021/10/25 23:07:18 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
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
	arr[i].copy = 0;
	return (arr);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	
	i = 0;
	while (par[i].str)
	{
		write (1, par[i].str, str_len(par[i].str));
		write (1, "\n", 1);
		write (1, par[i].size, str_len(par[i].size));
		write (1, "\n", 1);
		write (1, par[i].copy, str_len(par[i].copy));
		write (1, "\n", 1);
	}
}
