/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:58:36 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/24 19:05:14 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ops_swap_both(t_stack *stack_a, t_stack *stack_b)
{
	ops_swap(stack_a, 'a', FALSE);
	ops_swap(stack_b, 'b', FALSE);
	write(1, "ss\n", 3);
}

void	ops_rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	ops_rotate(stack_a, 'a', FALSE);
	ops_rotate(stack_b, 'b', FALSE);
	write(1, "rr\n", 3);
}

void	ops_reverse_rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	ops_reverse_rotate(stack_a, 'a', FALSE);
	ops_reverse_rotate(stack_b, 'b', FALSE);
	write(1, "rrr\n", 4);
}
