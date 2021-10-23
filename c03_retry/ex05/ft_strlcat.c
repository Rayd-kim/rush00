/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:35:34 by youskim           #+#    #+#             */
/*   Updated: 2021/10/23 23:27:02 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	size_of_str(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dest_size;

	i = 0;
	src_size = size_of_str(src);
	dest_size = size_of_str(dest);
	if (size == 0)
		return (src_size);
	else if (size <= dest_size)
		return (size + src_size);
	while (src[i] && i + 1 + dest_size < size)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (src_size + dest_size);
}
