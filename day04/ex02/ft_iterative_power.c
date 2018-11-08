/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 02:23:22 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/27 02:53:16 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (--power > 0)
		result *= nb;
	return (result);
}
