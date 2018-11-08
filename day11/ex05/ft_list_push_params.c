/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:40:58 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/07 16:41:40 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *head;
	t_list *node;

	if (ac < 1)
		return (NULL);
	if ((head = ft_create_elem(av[--ac])) == NULL)
		return (NULL);
	node = head;
	while (ac > 0 && (node->next = ft_create_elem(av[--ac])) != NULL)
		node = node->next;
	return (head);
}
