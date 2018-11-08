# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaodum <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 12:04:16 by jaodum            #+#    #+#              #
#    Updated: 2018/11/06 19:04:08 by jaodum           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX = ft
NAME = lib$(PREFIX).a
SRC_DIR = srcs
INC_DIR = includes

$(NAME): all

all:
	gcc -Werror -Wall -Wextra -c $(SRC_DIR)/$(PREFIX)_*.c -I$(INC_DIR)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
