/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:10:09 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/31 18:10:49 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_sqrt(int nb)
{
	int result;

	result = 1;
	while (result * result <= nb)
	{
		if (result * result == nb)
		{
			return (result);
		}
		++result;
	}
	return (0);
}