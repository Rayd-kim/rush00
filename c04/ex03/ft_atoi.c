/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimyousung <student.42seoul.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:12:43 by kimyousun         #+#    #+#             */
/*   Updated: 2021/10/23 21:26:36 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	start;
	int	value;
	int	sign;

	start = 0;
	value = 0;
	sign = 1;
	while ((str[start] >= 9 && str[start] <= 13) || str[start] == 32)
		start++;
	while (str[start] == '+' || str[start] == '-')
	{
		if (str[start] == '-')
			sign = -sign;
		start++;
	}
	while (str[start] >= '0' && str[start] <= '9' )
	{
		value = value * 10 + (str[start] - '0');
		start++;
	}
	return (sign * value);
}

#include <stdio.h>

int	main(void)
{
	char str[]=" 	\n-----++2147483648ad45";
	printf("%d\n", ft_atoi(str));
	return 0;
}
