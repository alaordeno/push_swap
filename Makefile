# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/04 17:27:05 by alaorden          #+#    #+#              #
#    Updated: 2026/02/24 19:26:32 by alaorden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE= push_swap

LIBFT_DIR= libft
LIBFT = $(LIBFT_DIR)/libff.a

CC= CC
CFLAGS= -Wall -Werror -Wextra -g

SRC= 		ps_ops_stack.c \
			sort.c \
			ps_ops.c \
			ps_ops2.c \
			parsing.c \
			push_swap.c \
			sort_utils.c \
			
		

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

.DEFAULT_GOAL: all

.PHONY: all clean fclean re