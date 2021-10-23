/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:54:28 by youskim           #+#    #+#             */
/*   Updated: 2021/10/21 19:41:29 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	value;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		value = nb * ft_recursive_factorial(nb - 1);
	return (value);
}
