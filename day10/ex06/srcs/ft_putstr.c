/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 14:21:36 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/06 13:00:02 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dope.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
