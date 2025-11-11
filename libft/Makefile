# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 16:09:54 by janrodri          #+#    #+#              #
#    Updated: 2025/10/22 17:41:46 by janrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ft_*.c)
BONUS_SRC = $(wildcard ft_*_bonus.c)
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@rm -f .bonus_built

bonus: $(NAME) .bonus_built

.bonus_built: $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	touch .bonus_built

clean:   
	rm -f $(OBJ) $(BONUS_OBJ)
	rm -f .bonus_built

fclean: clean
	rm -f $(NAME)

re: fclean all

