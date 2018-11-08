/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:26:09 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/07 16:27:04 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *node;

	if ((node = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}
