/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abronzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:52:22 by abronzo           #+#    #+#             */
/*   Updated: 2018/10/31 13:04:56 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		main(int ac, char **av)
{
	int i;
	i = 1;
	if (ac > 1)
		return((int)av);
		rush(av[1],av[2]);
		return (0);
}
