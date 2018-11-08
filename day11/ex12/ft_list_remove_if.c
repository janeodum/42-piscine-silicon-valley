/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:12:04 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/07 17:12:29 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *node;
	t_list *prev;

	if ((node = *begin_list) == NULL)
		return ;
	prev = NULL;
	while (node)
	{
		if ((*cmp)(node->data, data_ref) == 0)
		{
			if (prev)
				prev->next = node->next;
			else
				*begin_list = node->next;
		}
		prev = node;
		node = node->next;
	}
}
