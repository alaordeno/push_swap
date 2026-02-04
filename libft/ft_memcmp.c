/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:35:43 by alaorden          #+#    #+#             */
/*   Updated: 2025/11/05 13:51:49 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	count = 0;
	if (n == 0)
		return (0);
	while (count < n)
	{
		if (x[count] != y[count])
			return (x[count] - y[count]);
		count++;
	}
	return (0);
}

/* int	main(void)
{
	char	*s1 = "hola";
	char	*s2 = "lola";
	
	int res = ft_memcmp(s1, s2, 5);
	printf("mia %d\n", res);
	printf("orig %d\n",memcmp("hola", "lola", 6));
	return (0);
} */