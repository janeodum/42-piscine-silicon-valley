/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 21:39:56 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/27 23:08:37 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define EQP_SIZE 8
#define EQP_IN(x) ((x) >= 0 && (x) < EQP_SIZE)
#define EQP_TOGGLE(p, x, y) ((p)[(x)] |= 1 << (y))
#define EQP_TOGGLE_C(p, x, y) if (EQP_IN(x) && EQP_IN(y)) EQP_TOGGLE(p, x, y)
#define EQP_TOGGLED(p, x, y) ((p)[(x)] >> (y) & 1)

void		ft_eqp_toogle(short *puzzle, short x, short y)
{
	short	pos;

	pos = 1;
	EQP_TOGGLE(puzzle, x, y);
	while (pos < EQP_SIZE)
	{
		EQP_TOGGLE(puzzle, pos, y);
		EQP_TOGGLE_C(puzzle, x + pos, y + pos);
		EQP_TOGGLE_C(puzzle, x + pos, y - pos);
		pos++;
	}
}

int			ft_eqp_col(const short *prev, short col)
{
	short	puzzles[EQP_SIZE][EQP_SIZE];
	short	count;
	short	i;
	short	j;

	if (col >= 8)
		return (1);
	count = 0;
	i = -1;
	while (++i < EQP_SIZE)
	{
		j = -1;
		while (++j < EQP_SIZE)
			puzzles[i][j] = (short)(prev ? prev[j] : 0);
		if (EQP_TOGGLED(puzzles[i], col, i) == 0)
		{
			ft_eqp_toogle(puzzles[i], col, i);
			count += ft_eqp_col(puzzles[i], (short)(col + 1));
		}
	}
	return (count);
}

int			ft_eight_queens_puzzle(void)
{
	return (ft_eqp_col(0, 0));
}
