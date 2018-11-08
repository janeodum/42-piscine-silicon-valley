/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:14:09 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/01 20:14:15 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	char *sptr;

	while (*tab)
	{
		sptr = *tab;
		while (*sptr)
			ft_putchar(*sptr++);
		ft_putchar('\n');
		++tab;
	}
}
