# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshvets <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 16:47:12 by mshvets           #+#    #+#              #
#    Updated: 2018/10/29 18:47:00 by mshvets          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
HEAD = libft.h

all: $(NAME)

$(NAME): binary
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

binary:
	@$(CC) $(CFLAGS) *.c -I $(HEAD)

objective:
	@$(CC) *.o -o $(NAME)

clean: 
	@rm -f *.o $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

reclean: fclean all
	@rm -f *.o 
