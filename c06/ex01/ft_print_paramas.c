/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_paramas.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:06:13 by youskim           #+#    #+#             */
/*   Updated: 2021/10/21 18:05:49 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	argv_len(char *argv)
{
	int	length;
	
	length = 0;
	while (argv[length])
		length++;
	return (length);
}

int	main(int argc, char* argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write (1, argv[i], argv_len(argv[i]));
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
