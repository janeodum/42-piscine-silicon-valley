/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 02:54:43 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/27 02:58:14 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
