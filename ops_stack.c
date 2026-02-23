/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaviles <miaviles@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:52:17 by miaviles          #+#    #+#             */
/*   Updated: 2026/02/17 18:15:03 by miaviles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack(t_stack *stack,  int index, int data)  //funcion para rellenar el stack
{
	t_node	*temp;
	temp = (t_node *)malloc(sizeof(t_node));
	if (!temp)
		return ;
	temp->data = data;
	temp->s_index = index;
	temp->next = stack->head;
	stack->head = temp;
	stack->size++; //aYuDa, nO eNtIenDO nI VerGA 
}

int delete_stack(t_stack *stack)
{
	t_node *first;
	int		data;

	if (!stack->head)
		exit (1);
	first = stack->head;
	data = first->data
	stack->head = first->next;
	free(first);
	stack->size--;
	return (data)	
}