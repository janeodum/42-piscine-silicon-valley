/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:39:57 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/01 18:56:34 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int *ranptr;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	ranptr = range;
	while (min < max)
		*ranptr++ = min++;
	return (range);
}
