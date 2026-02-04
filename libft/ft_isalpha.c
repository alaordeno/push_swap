/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:41:15 by alaorden          #+#    #+#             */
/*   Updated: 2025/11/05 14:02:17 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char	x;
	int		y;

	x = 'A';
	y = ft_isalpha(x);
	printf("1 %d\n", isalpha(x));
	printf("2 %d\n", y);
	return (0);
}
  */