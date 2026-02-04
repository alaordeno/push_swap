# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/04 17:27:05 by alaorden          #+#    #+#              #
#    Updated: 2026/02/04 17:41:21 by alaorden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE= push_swap

LIBFT_DIR= libft /*dirección de libft?*/
LIBFT = $(LIBFT_DIR)/libff.a

CC= CC
CFLAGS= -Wall -Werror -Wextra -g /*prq -g ?

SRC= /*llamar a los programas SORCE

OBJ = $(SRC:.c=.o)

all = $(NAME)

$(NAME): $(LIBFT) $(OBJ) push_swap.h
	$(CC) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -o $@ $< -c

clean:
	rm -f $(OBJ)
	$(MAKE) fclean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL: all /* que hace esto?

.PHONY: all clean fclean re /*eh?