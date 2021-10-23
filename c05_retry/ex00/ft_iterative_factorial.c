/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:32:50 by youskim           #+#    #+#             */
/*   Updated: 2021/10/21 19:41:42 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	value;

	value = 1;
	count = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (count <= nb)
	{
		value = value * count;
		count++;
	}
	return (value);
}
