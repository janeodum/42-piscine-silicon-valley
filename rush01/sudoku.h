/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 22:54:28 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/04 01:28:53 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SUDOKU_H
# define SUDOKU_H
unsigned int	g_counter;
int				**g_solution;

typedef struct	s_poi
{
	int row;
	int	col;
}				t_poi;
#endif
