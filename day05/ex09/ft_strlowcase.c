/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:59:38 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/30 22:00:43 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (ft_isupper(*ptr))
			*ptr += 'a' - 'A';
		++ptr;
	}
	return (str);
}
