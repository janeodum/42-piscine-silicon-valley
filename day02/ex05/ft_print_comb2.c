/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:22:52 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/25 17:19:22 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar((char)((i / 10) + '0'));
			ft_putchar((char)((i % 10) + '0'));
			ft_putchar(' ');
			ft_putchar((char)((j / 10) + '0'));
			ft_putchar((char)((j % 10) + '0'));
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
