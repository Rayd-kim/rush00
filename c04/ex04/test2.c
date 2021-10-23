/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimyousung <student.42seoul.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:01:54 by kimyousun         #+#    #+#             */
/*   Updated: 2021/10/23 21:47:04 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

int	base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	check_base(char *base)
{	
	int	j;
	int	k;

	j = 0;
	if (base_len(base) < 2)
		return (0);
	while (base[j])
	{
		if (base[j] == '-' || base[j] == '+')
			return (0);
		else if (base[j] < 32 || base[j] == 127)
			return (0);
		else
		{	
			k = j + 1;
			while (base[k])
			{
				if (base[j] == base[k])
					return (0);
				k++;
			}
		}
		j++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{	
	unsigned int	arr[33];
	unsigned int	i;
	unsigned int	n;

	if (check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		n = nbr * -1;
		putchar('-');
	}
	else
		n = nbr;
	i = 1;
	while (n > 0)
	{
		arr[i] = base[n % base_len(base)];
		n = n / base_len(base);
		i++;
	}
	while (i-- >= 1)
		putchar(arr[i]);
}

int	main()
{
	ft_putnbr_base(1, "01");
}
