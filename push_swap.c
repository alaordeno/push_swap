/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:29:12 by alaorden          #+#    #+#             */
/*   Updated: 2026/03/04 17:40:21 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_ps(t_stack *stack_a, t_stack *stack_b, int *array, int size)
{
	int		i;
	t_node	*temp;

	if (!array || size <= 0)
		ft_error("Error\n", TRUE);
	stack_a->head = NULL;
	stack_a->size = 0;
	stack_b->head = NULL;
	stack_b->size = 0;
	i = size - 1;
	while (i >= 0)
	{
		push_stack(stack_a, 0, array[i]);
		i--;
	}
	ft_bubblesort(array, size);
	temp = stack_a->head;
	while (temp)
	{
		temp->s_index = ft_index(temp->data, array);
		temp = temp->next;
	}
}
/*
** -------------------------------------------------------------------------
** Main entry point of the push_swap program.
** 1. Checks if there are arguments.
** 2. Parses the input into an integer array (handling errors internally).
** 3. Initializes the linked lists (stacks A and B).
** 4. Calls the main sorting logic.
** 5. Frees all allocated memory (array and linked list) before exiting.
** -------------------------------------------------------------------------
*/

int	main(int argc, char **argv)
{
	int		count;
	t_stack	stack_a;
	t_stack	stack_b;
	int		*array;

	if (argc == 1)
		return (0);
	array = parse_input(argc, argv, &count);
	if (!array)
		ft_error("Error\n", TRUE);
	init_ps(&stack_a, &stack_b, array, count);
	sort(&stack_a, &stack_b, count);
	free(array);
	free_stack(&stack_a);
	return (0);
}
