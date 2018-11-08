/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 22:35:32 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/01 22:41:08 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int			ft_atoi(char *str);
int			ft_atoi_base(char *str, char *base);
void		*ft_print_memory(void *addr, unsigned int size);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_putnbr_base(int nbr, char *base);
void		ft_putstr(char *str);
void		ft_putstr_non_printable(char *str);
int			ft_sqrt(int nb);
int			ft_str_is_alpha(char *str);
int			ft_str_is_lowercase(char *str);
int			ft_str_is_numeric(char *str);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);
void		ft_swap(int *a, int *b);

#endif
