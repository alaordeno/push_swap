/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:12:57 by alaorden          #+#    #+#             */
/*   Updated: 2026/03/03 19:29:03 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_index(int n, int *array)
{
    int i;

    i = 0;
    while (array[i] != n)
        i++;
    return (i);
}

// int	ft_index(int n, int *array, int size)
// {
// 	int	i;
	
// 	(void)size;
// 	i = 0;
// 	while (array[i] != n)
// 	{
// 		i++;
// 	}
// 	return (i);
// }
