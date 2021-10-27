/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:09:10 by youskim           #+#    #+#             */
/*   Updated: 2021/10/27 12:32:10 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	str_len(char *str)
{
	int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

char	*str_sep(int size, char *arr, char **strs, char *sep)
{
	int	i;
	int	k;
	int	t;

	i = -1;
	k = 0;
	while (++i < size)
	{
		t = 0;
		while (strs[i][t])
		{
			arr[k] = strs[i][t];
			k++;
			t++;
		}
		t = 0;
		while (sep[t] && i != size - 1)
		{
			arr[k] = sep[t];
			k++;
			t++;
		}
	}
	arr[k] = '\0';
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		total;
	int		a;

	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char) * 1);
		arr[0] = '\0';
		return (arr);
	}
	total = 0;
	a = -1;
	while (++a < size)
		total = total + str_len(strs[a]);
	total = total + (size - 1) * str_len(sep);
	arr = (char *)malloc(sizeof(char) * (total + 1));
	if (arr == 0)
		return (0);
	return (str_sep(size, arr, strs, sep));
}

#include <stdio.h>
/*int main(int ac, char **av)
{
	printf ("%s\n", ft_strjoin(ac, av, "-"));
	return 0;
}*/

int	main()
{
	char *str[5] = {"ab", "ac", "ad", "aa", "ff"};
	//str[0] = "a";
	//str[1] = "b";
	//str[2] = "c";
	//str[3] = "d";
	//str[4] = "e";
	printf ("%s\n", ft_strjoin(5, str, "-"));
}
