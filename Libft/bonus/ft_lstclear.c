/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:32:25 by oibis             #+#    #+#             */
/*   Updated: 2022/02/06 19:32:25 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list  **list, void (*del)(void *))
{   
	t_list temp;

	if (*list && del)
	{   
		while (*list)
		{
			temp = list->next;
			ft_lstdelone(*list, del);
			*list = temp;
		}
	}
}