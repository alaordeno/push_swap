/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaviles <miaviles@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:29:12 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/20 21:34:13 by miaviles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_ps(t_stack *stack_a, t_stack *stack_b, int array, int size) //no tengo ni idea que hace esto
{
	int		I;
	t_node	*temp;

	if (!array || size <= 0)
		ft_error("Error\n", TRUE);
	stack_a->head = NULL;
	stack_a->size = 0;
	stack_b->head = NULL;
	stack_b->size = 0; //hacemos esto para inicializar todo?
	i = size - 1;
	while (i >= 0)
	{
		push_stack(stack_a, 0, array[i]);
		i--;
	}
	ft_bubblesort(array, size);
	temp = stack_a->head;
	while(temp)
	{
		temp->s_index = ft_index(temp->data, array);
		temp = temp->next;
	}
}
int	main(int argc, char **argv)
{
	int		count;
	t_stack	stack_a;
	t_stack	stack_b; //inicializacion como cualquier variable
	int		array;
	
	if (argc ==1) //solo me pasan el nombre del programa
		return (0);
	array = parse_input(argc, argv, &count);	//como count aun no existe entrego su direccion de memoria
	if (!array)
		ft_error("Error\n", TRUE);
	init_ps(&stack_a, &stack_b, array, count); //lo pasamos con & para mandarle la direccion de memoria
	sort(&stack_a, &stack_b, array, count);
	free(array);
	free_stack(&stack_a)
	return (0);
		
}