/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 01:42:47 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/27 02:51:53 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
		return (0);
	else if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
