/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:07:48 by alaorden          #+#    #+#             */
/*   Updated: 2025/11/04 15:56:40 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if ((unsigned char *)dest > (unsigned char *)src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			(((unsigned char *)dest)[i] = ((unsigned char *)src)[i]);
			i++;
		}
	}
	return (dest);
}

/*  int	main(void)
{
	char src[] = "adios";
	char dest[] = "Hola";

	ft_memmove(dest, src, 5);

	write(1, dest, 5);
	return (0);
} */