/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:29:45 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/11 18:46:36 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h> //libreria del intmax y el intmin

typedef struct s_node //empezamos a crear la estructura de los nodos
{
	int				data;
	int				s_index;
	struct s_dode	*next; //estructura de las listas
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	int		size;	
}	t_stack;

//IR PONIENDO LAS FUNCIOANES

#endif