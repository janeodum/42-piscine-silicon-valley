# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaodum <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 16:41:09 by jaodum            #+#    #+#              #
#    Updated: 2018/11/06 13:05:31 by jaodum           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX = ft
NAME = do-op
SRC_DIR = srcs
INC_DIR = includes

$(NAME): all

all:
	gcc -Werror -Wall -Wextra $(SRC_DIR)/cli.c $(SRC_DIR)/$(PREFIX)_*.c \
	-I$(INC_DIR) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
