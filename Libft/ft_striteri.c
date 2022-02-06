/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:10:29 by oibis             #+#    #+#             */
/*   Updated: 2022/02/06 00:10:29 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ‘f’ fonksiyonun stringin her karakterine uygular.
Eğer gerekli olursa her karakter adresi ile
gönderilmelidir
 */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}