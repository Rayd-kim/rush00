/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:32:38 by youskim           #+#    #+#             */
/*   Updated: 2021/10/23 13:18:50 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

int	main(int ac, char **str)
{
	int		i;
	int		k;
	char	*dest;
	int		a;

	a = 1;
	i = 1;
	if (ac == 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	else if (ac == 2)
	{
		write (1, str[ac - 1], str_len(str[ac - 1]));
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		while (i < ac - 1)
		{
			k = 0;
			while (str[i][k])
			{
				if (str[i][k] > str[i + 1][k])
				{
					dest = str[i];
					str[i] = str[i + 1];
					str[i + 1] = dest;
					i = 0;
					break ;
				}
				else
					k++;
			}
			i++;
		}
	}
	while (a < ac)
	{
		write (1, str[a], str_len(str[a]));
		write (1, "\n", 1);
		a++;
	}
	return (0);
}
