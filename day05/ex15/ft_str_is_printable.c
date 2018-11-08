/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 22:31:54 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/30 22:32:03 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprintable(int c)
{
	return (c > 31 && c < 127);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (ft_isprintable(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
