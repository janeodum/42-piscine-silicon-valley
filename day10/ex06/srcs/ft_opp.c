/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 23:39:00 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/05 23:40:11 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_opp.h"

t_opp		*ft_opp(char *op)
{
	t_opp	*opps;
	int		len;

	if (op == NULL)
		return (NULL);
	opps = g_opptab;
	if (opps == NULL)
		return (NULL);
	len = sizeof(g_opptab) / sizeof(*g_opptab);
	while (opps->op && opps - g_opptab < len)
		if (ft_strcmp(op, opps->op) == 0)
			return (opps);
		else
			++opps;
	return (NULL);
}
