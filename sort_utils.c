
#include "push_swap.h"

void	simple_sort(t_stack *stack, int len)
{
	int	min_s_index; //?
	int	c;

	if (is_stack_sorted(stack))
		return ; //que quiere decir cuando se pone asi? corto de return(0);?
	min_s_index = find_min_index(stack);
	c = count_index(stack->head, min_s_index);
	if (is_rot_sort(stack))
	{
		if (c < len - c)
			ops_rotate(stack, 'a', TRUE); //q es 'a'?
		else
			ops_reverse_rotate(stack, 'a', TRUE);
	}
	else
	{
		ops_swap(stack, 'a', TRUE);
		if (is_stack_sorted(stack))
			return ;
		if (c < len - c)
			ops_rotate(stack, 'a', TRUE);	
	}
}