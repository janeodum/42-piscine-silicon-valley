/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 00:46:53 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/27 16:38:50 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	if (nb < 0 || nb >= 13)
		return (0);
	else if (nb == 0)
		return (1);
	i = 0;
	result = 1;
	while (++i <= nb)
		result *= i;
	return (result);
}
