/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 00:19:09 by oibis             #+#    #+#             */
/*   Updated: 2022/02/04 00:19:09 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** LIBRARY: N/A
** SYNOPSIS: concatenate two strings into a new string (with malloc)
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a new string, which is the
**	result of the concatenation of ’s1’ and ’s2’.
Malloc kullanrak hafızadan bir parça ayırılır ve
çıktı olarak s1 ve s2 stringlerinin birleştirilmiş
hali döndürülür.

*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);

	while (s1[i])
		str[i] = s1[i++];
	while (s2[j])
		str[i + j] = s2[j++];
	str[size] = "\0";
	return (str);
}