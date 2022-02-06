/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:02:29 by oibis             #+#    #+#             */
/*   Updated: 2022/02/02 21:14:54 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		i;
	const char	*s;
    
	s = src;
	i = 0;
	while (*s && i < size - 1 && size != 0)
	{
		dest[i++] = *s++;
	}

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	else
		dest[i] = '\0';
	return (s - src);
}
