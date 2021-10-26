/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:28:09 by youskim           #+#    #+#             */
/*   Updated: 2021/10/26 11:11:58 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	start_str(char *str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	return (i * sign);
}

int	check_base(char c, char *base)
{
	int	k;

	k = 0;
	while (base[k])
	{
		if (c == base[k])
			return (k);
		k++;
	}
	return (-1);
}

int	nbr_to_base1(char *nbr, char *base_from)
{
	int	start;
	int	result;
	int	value;
	int	sign;

	sign = 1;
	result = 0;
	start = start_str(nbr);
	if (start < 0)
	{
		sign = -sign;
		start = -start;
	}
	value = check_base(nbr[start], base_from);
	while (value != -1)
	{
		result = result * str_len(base_from) + value;
		start++;
		value = check_base(nbr[start], base_from);
	}
	return (result * sign);
}

char	*if_minus(int nb, int count, char *base_to)
{
	int		i;
	char	*final;

	final = (char *)malloc(sizeof(char) * (count + 2));
	if (final == 0)
		return (0);
	final[0] = '-';
	i = 1;
	while (nb > 0)
	{
		final[count - i + 1] = base_to[nb % str_len(base_to)];
		nb = nb / str_len(base_to);
		i++;
	}
	final[i] = '\0';
	return (final);
}

char	*if_plus(int nb, int count, char *base_to)
{
	int		i;
	char	*final;

	final = (char *)malloc(sizeof(char) * (count + 1));
	if (final == 0)
		return (0);
	i = 1;
	while (nb > 0)
	{
		final[count - i] = base_to[nb % str_len(base_to)];
		nb = nb / str_len(base_to);
		i++;
	}
	final[i] = '\0';
	return (final);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_base1;
	int		sign;		
	char	*final;
	int		count;
	int		first_nb_base1;

	sign = 0;
	nb_base1 = nbr_to_base1(nbr, base_from);
	if (nb_base1 < 0)
	{
		sign += 1;
		nb_base1 = -nb_base1;
	}
	first_nb_base1 = nb_base1;
	count = 0;
	while (first_nb_base1 > 0)
	{
		first_nb_base1 = first_nb_base1 / str_len(base_to);
		count++;
	}
	if (sign == 1)
		return (if_minus(nb_base1, count, base_to));
	else
		return (if_plus(nb_base1, count, base_to));
}
#include <stdio.h>
int	main()
{
	char *nbr= "-2147483648";
	char *base1="0123456789";
	char *base2="01";
	printf("%s\n", ft_convert_base(nbr, base1, base2));
}
