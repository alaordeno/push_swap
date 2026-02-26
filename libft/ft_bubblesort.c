/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:12:27 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/26 17:12:30 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubblesort(int *array, int count)
{
	int	i;
	int	v;
	int	temp;

	if (!array || count <= 1)
		return ;
	v = 1;
	while (v)
	{
		v = 0;
		i = 0;
		while (i < count - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				v = 1;
			}
			i++;
		}
		count--;
	}
}
