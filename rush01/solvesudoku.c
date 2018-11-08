/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solvesudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:37:10 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/04 20:31:54 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudoku.h"
//checks if it will be legal to assign value(num) to the given row , col
int				validate(int **boards, int row, int col, int value)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if ((boards[i][col] == value) || (boards[row][i] == value))
			return (0);
		i += 1;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (boards[row - (row % 3) + i][col - (col % 3) + j] == value)
				return (0);
			j += 1;
		}
		i += 1;
	}
	return (1);
}

t_poi			search_spot(int **boards)
{
	t_poi	poi;
	int		x;
	int		y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (boards[y][x] == 0)
			{
				poi.row = y;
				poi.col = x;
				return (poi);
			}
			x++;
		}
		y++;
	}
	poi.row = -1;
	return (poi);
}

int				**save_soduku(int **p_soduku)
{
	int		x;
	int		y;
	int		**soduku;

	soduku = (int **)malloc(sizeof(int *) * 9);
	x = 0;
	while (x < 9)
	{
		soduku[x] = (int *)malloc(sizeof(int) * 9);
		y = 0;
		while (y < 9)
		{
		soduku[x][y] = p_soduku[x][y];
		y++;
		}
		x++;
	}
	return (soduku);
}

void			solve_sudoku(int **boards)
{
	int		num;
	t_poi	poi;

	if(g_counter < 2)
	{
		poi = search_spot(boards);
		if (poi.row == -1)
		{
			g_solution = save_soduku(boards);
			g_counter++;
			return ;
		}
		num = 1;
		while (num < 10)
		{
			if(validate(boards, poi.row, poi.col, num))
			{
				boards[poi.row][poi.col] = num;
				solve_sudoku(boards);
				boards[poi.row][poi.col] = 0;
			}
			num++;
		}
	}
}
