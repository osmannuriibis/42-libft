/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:49:14 by oibis             #+#    #+#             */
/*   Updated: 2022/02/03 18:49:14 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Str parametresi ile gösterilen karakter dizisinde c parametresi ile gösterilen değerin 
(unsigned char olarak değerlendirilir) son geçtiği yeri arar ve 
bu bellek adresini gösteren bir işaretçi geri döndürür.

Eğer str parametresi sonu boş karakter olan bir karakter dizisini gösteren bir işaretçi değilse, 
anlamsız bir sonuç elde edilir.*/
#include "libft.h"

char    *strrchr(char const *str, int c)
{
	char *last;

    if(c == 0)
        *last = 0;

	while(*s) {
		if(*s == c) {
			last = s;
		}
		s += 1;
	}
	return (char *)last;
}