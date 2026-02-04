/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:48:10 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/15 15:15:23 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	return (x >= '0' && x <= '9');
}

/* int	main(void)
{
	char *ptr = "12334abc56878";
	
	while (*ptr)
	{
		printf("mia %d\n", ft_isdigit(*ptr));
		printf("real %d\n", isdigit(*ptr));

		ptr++;
	}
	return (0);
}
 */