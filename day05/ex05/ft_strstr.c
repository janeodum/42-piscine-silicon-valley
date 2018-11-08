/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:21:52 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/30 23:09:22 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	char		*start;
	char		*find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		start = str;
		find = to_find;
		while (*find == *str)
		{
			++str;
			++find;
		}
		if (*find == '\0')
			return (start);
		str = start + 1;
	}
	return ((char *)0);
}
