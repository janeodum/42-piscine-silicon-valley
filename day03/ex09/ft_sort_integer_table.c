/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 23:37:40 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/26 23:39:04 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int imax;
	int i;

	if (tab)
		while (--size >= 0)
		{
			i = -1;
			imax = -1;
			while (++i <= size)
				if (imax == -1 || tab[i] > tab[imax])
					imax = i;
			if (imax != size)
				ft_swap(tab + size, tab + imax);
		}
}
