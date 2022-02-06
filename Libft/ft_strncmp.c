/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:59:47 by oibis             #+#    #+#             */
/*   Updated: 2022/02/03 18:59:47 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Str1 parametresi ile gösterilen karakter dizisinin, count parametre değeri kadar ilk karakterini, 
str2 parametresi ile gösterilen karakter dizisi ile karşılaştırır. 
Eğer her iki karakter dizisindeki tüm karakterler aynı ise sıfır değeri, 
aksi takdirde sıfırdan farklı bir değer geri döndürür.

Fonksiyon str1 ve str2 parametreleri ile gösterilen karakter dizilerini 
ilk karakterden itibaren karşılaştırmaya başlar. 
Birbirlerine eşitse, karakterler farklı olana veya 
karakter dizisinin sonunu gösteren boş bir karakterle karşılaşana veya 
her iki karakter dizisinde count parametre değeri miktarınca eşleşene kadar karşılaştırma işlemine devam eder. */

#include "libft.h"

int	strncmp(char const *str1, char const *str2, size_t count)
{
	int	dif;

	dif = 0;
	while (count-- > 0)
		if(*str1 - *str2++ != 0 || !*str1++)
		{
			dif = *str1 - *str2;
			break;
		}
	return (dif);
}