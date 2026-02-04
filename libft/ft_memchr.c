/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:18:10 by alaorden          #+#    #+#             */
/*   Updated: 2025/11/05 14:08:45 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //busca caracter concreto dentro de s

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	x = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (x[i] == c)
			return ((void *)(x + i));
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char *str = "Hola Mundo";
	char	c = 'M';
	size_t n = 11;
	
	char	*x = (char *)ft_memchr(str, c, n);
	
	if (x)
		write (1, x, 1);
	else
		write(1, "Nop", 3);
	return (0);	
	
} */
