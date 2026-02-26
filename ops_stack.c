/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:08:59 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/26 17:10:25 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack(t_stack *stack, int index, int data)
{
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	if (!temp)
		return ;
	temp->data = data;
	temp->s_index = index;
	temp->next = stack->head;
	stack->head = temp;
	stack->size++;
}

int	delete_stack(t_stack *stack)
{
	t_node	*first;
	int		data;

	if (!stack->head)
		exit (1);
	first = stack->head;
	data = first->data;
	stack->head = first->next;
	free(first);
	first = NULL;
	stack->size--;
	return (data);
}
