/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:45:59 by youskim           #+#    #+#             */
/*   Updated: 2021/10/20 23:23:29 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	argv_len(char *argv)
{
	int	length;
	while (argv[length])
		length++;
	return (length);
}

int	main(int argc, char *argv[])
{
	write(1, argv[0], argv_len(argv[0]));
	write(1, "\n", 1);
	return 0;
}
