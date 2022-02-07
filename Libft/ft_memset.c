/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 02:32:29 by oibis             #+#    #+#             */
/*   Updated: 2022/02/07 19:33:04 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Bu işlev, c değerini (unsigned char türüne dönüştürerek) blok adresinden 
başlayan nesnenin ilk boyut baytının her birine kopyalar 
ve blok’un değeri ile döner.
 */
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)dest;
	while (i < len)
		temp[i++] = (unsigned char)c;
	return (dest);
}
