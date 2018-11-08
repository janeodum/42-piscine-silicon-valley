/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_desstroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 12:46:57 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/02 12:47:02 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	char ***ptr;
	char **ptr2;

	ptr = factory;
	while ((ptr2 = *ptr))
	{
		while (*ptr2)
			free(*ptr2++);
		free(*ptr2);
		free(*ptr++);
	}
	free(*ptr);
	free(factory);
}
