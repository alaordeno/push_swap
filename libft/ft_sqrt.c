/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:48:02 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/26 17:06:26 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nmb)
{
	int	i;

	if (nmb < 0)
		return (-1);
	if (nmb < 4)
		return (1);
	i = 2;
	while (i * i < nmb)
		i++;
	if (i * i - nmb < nmb - (i - 1) * (i - 1))
		return (i);
	return (i - 1);
}
