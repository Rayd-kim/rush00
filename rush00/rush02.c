/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:07:14 by youskim           #+#    #+#             */
/*   Updated: 2021/10/10 15:42:28 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	i;

	if (x < 1 || y < 1)
		ft_putchar('N');
	else
	{
		h = 0;
		while (h++ < y)
		{
			i = 0;
			while (i++ < x)
			{
				if ((i == 1 || i == x) && h == 1)
					ft_putchar('A');
				else if (h == y && (i == 1 || i == x))
					ft_putchar('C');
				else if ((h == 1 || h == y) || (i == 1 || i == x))
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
}
