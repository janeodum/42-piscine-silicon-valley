/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:36:23 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/06 18:59:55 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	if (tab && f)
	{
		i = -1;
		while (++i < length)
			f(tab[i]);
	}
}

int main ()
{
	int *tab;

	int length = 1337;
	void ft_putnbr;
	write (1, ft_foreach(tab, 1337, &ft_putnbr), 1);
	return (0);
}
