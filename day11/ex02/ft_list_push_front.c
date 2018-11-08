/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:32:01 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/07 16:32:06 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	if (begin_list && (node = ft_create_elem(data)))
	{
		node->next = *begin_list;
		*begin_list = node;
	}
}
