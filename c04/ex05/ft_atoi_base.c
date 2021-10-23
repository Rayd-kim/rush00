/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:42:38 by youskim           #+#    #+#             */
/*   Updated: 2021/10/20 22:01:33 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *base)
{
	int	length;

	length = 0;
	while (base[length])
		length++;
	return (length);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (str_len(base) < 2)
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] >= 9 && base[i] <= 13 || base[i] == 32)
			return (0);
		else
		{
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
		}
		i++;
	}
	return (1);
}

int	str_start_num(char *str)
{
	int	first_str;
	int	sign;

	sign = 1;
	first_str = 0;
	while (str[first_str] >= 9 && str[first_str] <= 13 || str[first_str] == 32)
		first_str++;
	while (str[first_str] == '+' || str[first_str] == '-')
	{
		if (str[first_str] == '-')
			sign = -sign;
		first_str++;
	}
	return (sign * first_str);
}

int	str_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	start;
	int	value_end;
	int	sign;
	int	result;

	sign = 1;
	start = 0;
	value_end = 0;
	result = 0;
	if (check_base(base) == 0)
		return ;
	start = str_start_num(str);
	if (start < 0)
	{
		sign = -sign;
		start = -start;
	}
	value_end = str_in_base(str[start], base);
	while (value_end != -1)
	{
		result = (result * str_len(base)) + value_end;
		start++;
		value_end = str_in_base(str[start], base);
	}
	return (result * sign);
}
