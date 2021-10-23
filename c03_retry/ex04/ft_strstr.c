/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:35:22 by youskim           #+#    #+#             */
/*   Updated: 2021/10/21 10:30:20 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(char *arr)
{
	int	k;

	k = 0;
	while (arr[k])
		k++;
	return (k);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (j == length(to_find))
				return (&str[i - j]);
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return (0);
}
