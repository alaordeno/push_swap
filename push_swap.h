/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:29:45 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/24 19:06:17 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h> //libreria del intmax y el intmin

typedef struct s_node //empezamos a crear la estructura de los nodos
{
	int				data;
	int				s_index;
	struct s_node	*next; //estructura de las listas
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	int		size;	
}	t_stack;

/* push_swap.c */
void	init_ps(t_stack *stack_a, t_stack *stack_b, int array, int size);
int		main(int argc, char **argv);

/* parcing.c */
void	check_repeated(int *array, int count);
void	check_limits(char *num_str);
void	fill_array(int argc, char **argv, int *array);
int		count_nmb(int argc, char **argv);
int		parse_input(int argc, char **argv, int *count);

/* ps_ops_stack.c */
void	push_stack(t_stack *stack, int index, int data);
int		del_stack(t_stack *stack);

/* sort.c */
int		find_min_index(t_stack *stack);
int		count_ind(t_node *stack, int ind);
int		is_stack_sorted(t_stack *stack);
int		free_stack(t_stack *stack);
void	sort(t_stack *stack_a, t_stack *stack_b, int *num, int len);

/* ps_ops.c */
void	ops_swap(t_stack *stack, char x, t_bool b);
void	ops_push(t_stack *stack1, t_stack *stack2, char x, t_bool b);
void	ops_rotate(t_stack *stack, char x, t_bool b);
void	ops_reverse_rotate(t_stack *stack, char x, t_bool b);

/* ops_stack.c */
void	push_stack(t_stack *stack, int index, int data);
int		delete_stack(t_stack *stack);

/* sort_utils.c */
int		is_rot_sort(t_stack *stack);
void	simple_sort(t_stack *stack, int len);
void	s_insertion_sort(t_stack *stack_a, t_stack *stack_b, int len);
void	k_sort1(t_stack *stack_a, t_stack *stack_b, int len);
void	k_sort2(t_stack *stack_a, t_stack *stack_b, int len);

/* ps_ops2.c */
void	ops_swap_both(t_stack *stack_a, t_stack *stack_b);
void	ops_rotate_both(t_stack *stack_a, t_stack *stack_b);
void	ops_reverse_rotate_both(t_stack *stack_a, t_stack *stack_b);

#endif