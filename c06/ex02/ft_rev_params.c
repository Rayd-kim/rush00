/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:01:06 by youskim           #+#    #+#             */
/*   Updated: 2021/10/21 18:07:29 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	argv_len(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{
		write (1, argv[argc - 1], argv_len(argv[argc - 1]));
		write (1, "\n", 1);
		argc--;
	}
}
