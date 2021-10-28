/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:30:59 by youskim           #+#    #+#             */
/*   Updated: 2021/10/27 22:33:19 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_in_charset(char c, char *charset)
{
	int	k;

	k = 0;
	while (charset[k])
	{
		if (c == charset[k])
			return (0);
		k++;
	}
	return (1);
}

int	nb_of_str(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	while (str_in_charset(str[i], charset) == 0)
		i++;
	while (str[i])
	{
		while (str_in_charset(str[i], charset) == 1)
			i++;
		count++;
		while (str_in_charset(str[i], charset) == 0)
			i++;
	}
	return (count);
}

char	*cut_str(char *str, char *charset, int count, int start)
{
	char	*arr;
	int		i;

	arr = (char *)malloc(sizeof(char) * (count + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	while (i < count)
	{
		arr[i] = str[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}

int	start_check(char *str, char *charset)
{
	int	start;

	start = 0;
	while (str_in_charset(str[start], charset) == 0)
		start++;
	return (start);
}

char	**ft_split(char *str, char *charset)
{	
	char	**final;
	int		j;
	int		start;
	int		count;

	final = (char **)malloc(sizeof(char *) * (nb_of_str(str, charset) + 1));
	if (final == 0)
		return (NULL);
	j = 0;
	start = start_check(str, charset);
	while (j < nb_of_str(str, charset))
	{
		count = 0;
		while (str_in_charset(str[start], charset) == 1)
		{
			start++;
			count++;
		}
		final[j] = cut_str(str, charset, count, start - count);
		while (str_in_charset(str[start], charset) == 0)
			start++;
		j++;
	}
	final[j] = 0;
	return (final);
}

#include <stdio.h>

int	main()
{
	char **range;
	char *str="14221abc1cdf12tg23akk2";
	char *charset="123";
	range = ft_split(str, charset);
	for (int i = 0; i < 6; i++)
		printf("%s\n", range[i]);
	return 0;
}

