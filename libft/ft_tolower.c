/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:08:40 by alaorden          #+#    #+#             */
/*   Updated: 2025/11/04 15:48:00 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int y)
{
	if (y >= 'A' && y <= 'Z')
		y = y + 32;
	return (y);
}

/* int	main(void)
{
	char	y;

	y = 'A';
	printf("%c\n", ft_tolower(y));
	return (0);
}
 */