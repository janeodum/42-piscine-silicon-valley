/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:09:09 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/31 19:17:47 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char *av[])
{
	if (ac == 1)
	{
		while (*av[0] != '\0')
			ft_putchar(*av[0]++);
		ft_putchar('\n');
	}
	return (0);
}
