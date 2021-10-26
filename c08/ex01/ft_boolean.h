/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:58:03 by youskim           #+#    #+#             */
/*   Updated: 2021/10/25 14:15:33 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define EVEN_MSG	"I have an even number of arguments."
# define ODD_MSG 	"I have an odd number of arguments."
# define EVEN(nbr)	nbr % 2 == 0
# define TRUE		0
# define FALSE		1
# define SUCCESS	0

typedef int	t_bool;

#endif
