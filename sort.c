/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:56:22 by alaorden          #+#    #+#             */
/*   Updated: 2026/03/03 19:24:38 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_stack *stack)
{
	t_node	*current;
	int		min_ind;

	if (!stack || !stack->head)
		return (-1);
	current = stack->head;
	min_ind = current->s_index;
	while (current)
	{
		if (current->s_index < min_ind)
			min_ind = current->s_index;
		current = current->next;
	}
	return (min_ind);
}

int	count_ind(t_node *stack, int ind)
{
	int	count;

	if (!stack)
		return (-1);
	count = 0;
	while (stack)
	{
		if (stack->s_index == ind)
			return (count);
		stack = stack->next;
		count++;
	}
	return (0);
}

int	is_stack_sorted(t_stack *stack)
{
	t_node	*tmp;

	if (!stack || !stack->head || !stack->head->next)
		return (1);
	tmp = stack->head;
	while (tmp ->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	free_stack(t_stack *stack)
{
	if (!stack)
		return ;
	while (stack)
		delete_stack(stack);
}

void	sort(t_stack *stack_a, t_stack *stack_b, int *num, int len)
{
	if (is_stack_sorted(stack_a))
	{
		free_stack(stack_a);
		ft_clean_error("", FALSE, num);
	}
	if (len == 2)
	{
		if (stack_a->head->data > stack_a->head->next->data)
			ops_swap(stack_a, 'a', TRUE);
	}
	else if (len == 3)
		simple_sort(stack_a, len);
	else if (len <= 7)
		s_insertion_sort(stack_a, stack_b, len);
	else if (len > 7)
	{
		k_sort1(stack_a, stack_b, len);
		k_sort2(stack_a, stack_b, len);
	}
	else
		ft_error("", TRUE);
}
