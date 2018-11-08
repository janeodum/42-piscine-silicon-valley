/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:19:32 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/31 20:12:19 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char *av[])
{
	int i;

	i = 0;
	if (ac > 1)
		while (++i < ac)
		{
			while (*av[i])
				ft_putchar(*av[i]++);
			ft_putchar('\n');
		}
	return (0);
}