/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:37:30 by youskim           #+#    #+#             */
/*   Updated: 2021/10/27 14:52:53 by youskim          ###   ########.fr       */
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

void	putnbr(int n)
{
	char	mod;

	if (n == -2147483648)
		write (1, "-2147483648", 11);
	else if (n == 0)
		write (1, "0", 1);
	else
	{
		if (n < 0)
		{
			write (1, "-", 1);
			n = -n;
		}
		if (n > 0)
		{
			mod = n % 10 + '0';
			n = n / 10;
			putnbr(n);
			write (1, &mod , 1);
		}
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	
	i = 0;
	while (par[i].str)
	{
		write (1, par[i].str, str_len(par[i].str));
		write (1, "\n", 1);
		putnbr(par[i].size);		
		write (1, "\n", 1);
		write (1, par[i].copy, str_len(par[i].copy));
		write (1, "\n", 1);
		i++;
	}
}
