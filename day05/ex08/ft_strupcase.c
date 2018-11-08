/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:55:31 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/30 21:57:02 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (ft_islower(*ptr))
			*ptr -= 'a' - 'A';
		++ptr;
	}
	return (str);
}
