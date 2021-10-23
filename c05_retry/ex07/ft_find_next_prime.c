/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:21:29 by youskim           #+#    #+#             */
/*   Updated: 2021/10/23 11:23:11 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	next_prime(int nb)
{
	int	k;
	int	end;

	end = 0;
	k = 2;
	if (nb % 2 == 0)
		return (next_prime(nb + 1));
	while (k <= 46340 && k < nb && end == 0)
	{
		if (nb % k == 0)
			end++;
		k++;
	}
	if (end == 0)
		return (nb);
	else
		return (next_prime(nb + 1));
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	stop;

	stop = 0;
	i = 2;
	if (nb <= 1)
		return (2);
	else if (nb != 2 && nb % 2 ==0)
		return (next_prime(nb + 1));
	while (i <= 46340 && i < nb && stop == 0)
	{
		if (nb % i == 0)
			stop++;
		i++;
	}
	if (stop == 0)
		return (nb);
	else
		return (next_prime(nb + 1));
}				
