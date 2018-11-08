/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 12:49:45 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/02 13:08:53 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STRNSIZE(s) (s), (sizeof(s)-1)

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static inline char	ft_isws(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static inline char	ft_tolower(char c)
{
	return (c >= 'A' && c <= 'Z' ? (char)(c + 'a' - 'A') : c);
}

static inline int	ft_strmatch(const char *s1, const char *s2)
{
	while (*s2 && ft_isws(*s2))
		++s2;
	while (*s1 && (ft_tolower(*s1) == ft_tolower(*s2)))
	{
		++s1;
		++s2;
	}
	return (ft_tolower(*s1) - ft_tolower(*s2));
}

char	ft_spy(int argc, char **argv)
{
	while (--argc > 0)
		if (0 == ft_strmatch(argv[argc], "president"))
			write(1, STRNSIZE("Alert!!!\n"));
		else if (0 == ft_strmatch(argv[argc], "attack"))
			write(1, STRNSIZE("Alert!!!\n"));
		else if (0 == ft_strmatch(argv[argc], "Bauer"))
			write(1, STRNSIZE("Alert!!!\n"));
		return ((char)0);
}

#ifndef FT_MAIN_WOOOW
# define FT_MAIN_WOOOW

int					main(int argc, char **argv)
{
	ft_putchar(ft_spy(argc, argv));
	return (0);
}

#endif
