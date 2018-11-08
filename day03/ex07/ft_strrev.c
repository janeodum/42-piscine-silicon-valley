/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 03:43:36 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/26 03:43:59 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*ft_strrev(char *str)
{
	char	*begin;
	char	*end;

	begin = str;
	end = str;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (begin < end)
	{
		ft_swap(begin, end);
		begin++;
		end--;
	}
	return (str);
}
