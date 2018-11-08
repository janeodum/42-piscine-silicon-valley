/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abronzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:10:44 by abronzo           #+#    #+#             */
/*   Updated: 2018/10/28 21:59:09 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	top_and_bot_lines(int x, int y)
{
	int i;

	i = 0;
	ft_putchar('o');
	while (i++ < x - 2)
		ft_putchar('-');
	if (x > 1)
		ft_putchar('o');
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	middle_lines(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j++ < y - 2)
	{
		ft_putchar('|');
		i = 0;
		while (i++ < x - 2)
			ft_putchar(' ');
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	top_and_bot_lines(x, y);
	middle_lines(x, y);
	if (y > 1)
		top_and_bot_lines(x, y);
}
