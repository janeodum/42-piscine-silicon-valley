/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:32:47 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/05 16:33:27 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int		*buffer;
	int		i;

	buffer = NULL;
	if (tab)
	{
		if (length <= 0)
			return (buffer);
		if ((buffer = malloc(sizeof(int) * length)) == NULL)
			return (buffer);
		i = -1;
		while (++i < length)
			buffer[i] = f ? f(tab[i]) : tab[i];
	}
	return (buffer);
}
