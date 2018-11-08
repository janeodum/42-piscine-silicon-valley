/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 22:38:00 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/25 19:43:15 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0' - 1;
	while (++i <= '7')
	{
		j = i;
		while (++j <= '8')
		{
			k = j;
			while (++k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != '7' || j != '8' || k != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
