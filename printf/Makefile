# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 18:16:03 by fabnenci          #+#    #+#              #
#    Updated: 2024/04/05 18:42:33 by fabnenci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
DEPS := ft_printf.h
CFILES :=	ft_printf.c \
			ft_printf_utils.c	\

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean flean re
	echo mark all non-file targets
