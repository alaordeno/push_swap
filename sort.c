

#include "push_swap.h"

int	is_stack_sorted(t_stack *stack)
{
	t_node *tmp;

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
		del_stack(stack)
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
		simple_sort(stack_a, 'a', TRUE)
	else if (len <= 7)
		s_insertion_sort(stack_a, stack_b, len)
	else if (len > 7)
	{
		k_sort1(stack_a, stack_b, len);
		k_sort2(stack_a, stack_b, len);
	}
	else
		ft_error("", TRUE);
}
