# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 01:36:20 by ykenzaou          #+#    #+#              #
#    Updated: 2023/01/26 01:39:00 by ykenzaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
FLG = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc

FILES = ft_printf.c ft_strlen.c ft_putchar.c ft_putstr.c ft_putnbr_xX.c ft_putnbr_id.c ft_putnbr_uns.c ft_putpointer.c

OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)
		
%.o: %.c ft_printf.h
	$(CC) -c $< $(FLG)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
