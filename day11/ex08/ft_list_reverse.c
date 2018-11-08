/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:52:04 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/07 16:53:38 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*node;
	t_list	*next;

	if (!begin_list || (node = *begin_list) == NULL)
		return ;
	prev = NULL;
	while (node)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}
	*begin_list = prev;
}
