/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:06:26 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/06 13:11:06 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strcmp_1(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void		ft_swap_1(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void		ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	flag;

	if (tab == NULL)
		return ;
	i = 0;
	while (tab[i])
		++i;
	while (--i > (flag = 0))
	{
		j = -1;
		while (++j < i)
			if (ft_strcmp_1(tab[j + 1], tab[j]) < 0)
				ft_swap_1(tab + j + (flag = 1), tab + j);
		if (flag == 0)
			break ;
	}
}
