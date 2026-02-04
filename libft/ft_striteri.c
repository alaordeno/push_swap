/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:56:15 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/27 15:39:16 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* static void   ft_add_count(unsigned int n, char *c)
{
	n = 2;
    *c = *c + n;
}


int	main(void)
{
	char str[] = "Hola que tal?";

	ft_striteri(str, ft_add_count);
        
	printf("%s\n", str);

	return (0);
} */