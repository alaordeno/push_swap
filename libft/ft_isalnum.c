/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:21:58 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/08 13:34:35 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char x)
{
	if ((x >= '0' && x <= '9') || (x >= 'A' && x <= 'Z')
		|| (x >= 'a' && x <= 'z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	x;
	int		y;

	x = '.';
	y = ft_isalnum(x);
	printf("%d", y);
	return (0);
}*/
