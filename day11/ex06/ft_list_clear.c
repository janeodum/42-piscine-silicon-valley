/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:42:49 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/07 16:44:58 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (begin_list && *begin_list)
	{
		ft_list_clear(&(*begin_list)->next);
		free(*begin_list);
		*begin_list = NULL;
	}
}
