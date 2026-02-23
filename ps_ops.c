
#include "push_swap.h"	

void	ops_swap(t_stack *stack, char x, t_bool b)
{
	t_node *tmp;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	tmp = stack->head;
	stack->head = tmp->next;
	tmp->next = stack->head->next;
	stack->head->next = tmp;
	if (b)
	{
		write(1, "s", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	ops_push(t_stack *stack1, t_stack *stack2, char x, t_bool b)
{
	int	index;
	int	data;

	if (stack1->head == NULL)
		return ;
	index = stack1->head->s_index;
	data = del_stack(stack1);
	push_stack(stack2, index, data);
	if (b)
	{
		write(1, "p", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}