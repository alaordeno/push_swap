/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:29:12 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/11 18:45:17 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		count;
	t_stack	stack_a;
	t_stack	stack_b; //inicializacion como cualquier variable
	int		array;
	
	if (argc ==1) //solo me pasan el nombre del programa
		return (0);
	array = parse_input(argc, argv, &count)	//como count aun no existe entrego su direccion de memoria
	
}