/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:32:08 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/12 18:46:36 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* es igual que el atoi pero es array to long  */

#include "libft.h"

long	ft_atol(const char *str)
{
	long	res;
	int		sign;
	size_t	count;

	res = 0;
	sign = 1;
	count = 0;
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if(str[count] == '-')
			sign *= -1
	}	 
}