/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:55:49 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/30 14:14:46 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcpy(char *dest, char *src)
{
	char *buff;

	buff = dest;
	while ((*buff++ = *src++) != '\0')
	{
		;
	}
	return (dest);
}