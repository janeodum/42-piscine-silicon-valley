/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 17:37:08 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/01 18:30:23 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *duplicate;
	char *strptr;
	char *dupptr;

	strptr = src;
	while (*strptr++)
		;
	duplicate = malloc(strptr - src + 1);
	if (!duplicate)
		return (NULL);
	dupptr = duplicate;
	while ((*dupptr++ = *src++) != '\0')
		;
	return (duplicate);
}
