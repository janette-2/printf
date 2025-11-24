# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 18:33:28 by janrodri          #+#    #+#              #
#    Updated: 2025/11/24 23:55:29 by janrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_check_bytes_count.c \
	  ft_format.c \
	  ft_printf.c \
	  ft_put_hex_nbr_fd.c \
	  ft_put_hex_upper_nbr_fd.c \
	  ft_put_nbr_fd_count.c \
	  ft_put_percentage_fd.c \
	  ft_put_pointer_fd.c \
	  ft_put_unsigned_nbr_fd.c \
	  ft_putchar_fd_count.c \
	  ft_putstr_fd_count.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re