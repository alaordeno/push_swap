/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:17:20 by alaorden          #+#    #+#             */
/*   Updated: 2025/11/04 18:07:00 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*b;

	b = (void *)malloc(size * nmemb);
	if (!b)
		return (NULL);
	ft_bzero(b, size * nmemb);
	return (b);
}

/* int	main(void)
{
	int	*n;
	int	x = 5;

	n = (int *)ft_calloc(x, sizeof(int));
	if (!n)
	{
		printf("ERROR\n");
		return (1);
	}

	size_t	c = 0;
	while (c < (size_t)x)
	{
		printf("n%zu = %d\n", c, n[c]);
		c++;
	}

	free(n);
	return (0);
}
 */