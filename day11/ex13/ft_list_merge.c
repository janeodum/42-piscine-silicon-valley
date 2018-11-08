/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:13:28 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/07 17:14:54 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *node;

	if (begin_list1 == NULL)
		return ;
	if (*begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else
	{
		node = *begin_list1;
		while (node->next)
			node = node->next;
		node->next = begin_list2;
	}
}
