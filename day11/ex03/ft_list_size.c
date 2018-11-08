/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:35:56 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/07 16:36:47 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		s;
	t_list	*node;

	s = 0;
	node = begin_list;
	while (node)
	{
		++s;
		node = node->next;
	}
	return (s);
}
