/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 17:21:07 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/03 22:54:03 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

extern unsigned int		g_counter;
extern int				**g_solution;

void	solve_sudoku(int **boards, int val);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	display_boards(int **boards)
{
	int		x;
	int		y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			ft_putchar(boards[x][y] + '0');
			if (y != 8)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int		**read_argv(char **argv)
{
	int		x;
	int		y;
	int		**boards;

	x = 0;
	boards = (int **)malloc(sizeof(int *) * 9);
	while (x < 9)
	{
		if (ft_strlen(argv[x]) != 9)
			return (0);
		boards[x] = (int *)malloc(sizeof(int) * 9);
		y = 0;
		while (y < 9)
		{
			if (argv[x][y] == '.')
				boards[x][y] = 0;
			else if (argv[x][y] >= '1' && argv[x][y] <= '9')
				boards[x][y] = argv[x][y] - '0';
			else
				return (0);
			y++;
		}
		x++;
	}
	return (boards);
}

int		main(int argc, char **argv)
{
	int		**boards;

	g_counter = 0;
	if (argc == 10)
	{
		boards = read_argv(&argv[1]);
		if (!boards)
			write(1, "Error\n", 6);
		else if (boards)
		{
			solve_sudoku(boards, 0);
			if (g_counter == 1)
				display_boards(g_solution);
			else
				write(1, "Error\n", 6);
		}
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
