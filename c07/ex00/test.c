/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:26:13 by youskim           #+#    #+#             */
/*   Updated: 2021/10/25 22:16:42 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	str_len(char *str)
{
	int	k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	c = (char *)malloc(sizeof(char) * (str_len(src)));
	if (c == 0)
		return (0);
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
#include <stdio.h>
#include <string.h>

int	main()
{
	char *a = "123";
	char
	printf ("%s\n", ft_strdup(a));
	printf ("%s\n", strdup(a));
}
