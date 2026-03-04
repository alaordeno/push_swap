# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/26 18:02:59 by alaorden          #+#    #+#              #
#    Updated: 2026/03/04 17:44:07 by alaorden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap

LIBFT_DIR= libft
LIBFT = $(LIBFT_DIR)/libft.a

CC= cc
CFLAGS= -Wall -Werror -Wextra -g

SRC=		ps_ops.c\
			parcing.c\
			sort_utils.c\
			sort.c\
			ops_stack.c\
			push_swap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) push_swap.h
	$(CC) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -o $@ $< -c

clean:
	rm -f $(OBJ)
	$(MAKE) fclean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL: all

.PHONY: all clean fclean re