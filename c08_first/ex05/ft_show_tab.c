/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:37:30 by youskim           #+#    #+#             */
/*   Updated: 2021/10/27 19:44:18 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	putnbr(int n)
{
	char	mod;

	if (n == -2147483648)
		write (1, "-2147483648", 11);
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		mod = n % 10 + '0';
		n = n / 10;
		putnbr(n);
		write (1, &mod, 1);
	}
	else
	{
		mod = n + '0';
		write (1, &mod, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		write (1, par[i].str, par[i].size);
		write (1, "\n", 1);
		putnbr (par[i].size);
		write (1, "\n", 1);
		write (1, par[i].copy, par[i].size);
		write (1, "\n", 1);
		i++;
	}
}
