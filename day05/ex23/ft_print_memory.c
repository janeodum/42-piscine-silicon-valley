/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 23:27:57 by jaodum            #+#    #+#             */
/*   Updated: 2018/10/31 02:04:34 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void		ft_putchar(char c)
{
	write (1, &c, 1);
}

int			ft_putnbr_base_n(int nbr, const char *base, int base_len)
{
	char	buffer[1000];
	int		i;
	int		c;

	c = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
		++c;
	}
	i = 0;
	while (nbr >= base_len)
	{
		buffer[++i] = base[nbr % base_len];
		nbr /= base_len;
	}
	buffer[++i] = base[nbr % base_len];
	while (i && ++c)
		ft_putchar(buffer[i--]);
	return (c);
}

int			ft_print_memstr(const char *ptr, int i, int len)
{
	int		c;
	int		value;

	c = 0;
	if (i++ < len)
	{
		if ((value = (int)ptr[i - 1]) < 16 && ++c)
			ft_putchar('0');
		c += ft_putnbr_base_n(value, "0123456789abcdef", 16);
		if (i++ < len)
		{
			if ((value = (int)ptr[i - 1]) < 16 && ++c)
				ft_putchar('0');
			c += ft_putnbr_base_n(value, "0123456789abcdef", 16);
		}
	}
	else
		++i;
	while (c < 5)
	{
		ft_putchar(' ');
		++c;
	}
	return (i);
}

char		*ft_mem_get_lead(int line)
{
	if (line > 40)
		return ("");
	else if (line > 30)
		return ("000");
	else if (line > 20)
		return ("0000");
	else if (line > 10)
		return ("0000000");
	else if (line == 00)
		return ("0000000");
	return ("000000");
}

void		ft_print_mem_line(char *ptr, int line, int len)
{
	int		i;
	char	*lead;

	lead = ft_mem_get_lead(line);
	while (*lead)
		ft_putchar(*lead++);
	ft_putnbr_base_n(line * 10, "0123456789", 10);
	ft_putchar(':');
	ft_putchar(' ');
	i = 0;
	while (i < 16)
		i = ft_print_memstr(ptr, i, len);
	i = -1;
	while (++i < 16)
		if (i < len)
			ft_putchar((char)((int)ptr[i] > 31 &&
				(int)ptr[i] != 2032 ? ptr[i] : '.'));
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	int		line;
	int		len;

	i = 0;
	line = 0;
	while (i < (int)size)
	{
		len = size - i;
		ft_print_mem_line(addr + i, line, len > 16 ? 16 : len);
		i += 16;
		++line;
	}
	return (addr);
}
int main()
{
	char *s1 = "salut comment tu vas";
	printf("%s\n",ft_print_memory(&s1, 15));
	return (0);
}
