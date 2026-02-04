/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:36:24 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/04 17:30:13 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	s = 0;
	while (dst[d] && d < size)
		d++;
	while (src[s])
		s++;
	if (d == size)
		return (size + s);
	i = 0;
	while (src[i] && d + i + 1 < size)
	{
		dst[d + i] = src[i];
		i++;
	}
	if (d < size)
		dst[d + i] = '\0';
	return (d + s);
}

/*  int main(void)
 {
	char	dst[] = "hola";
	const char src[] = " mundo";
	
	ft_strlcat(dst, src, 15);
	printf("%s\n", dst);
	return (0);
 }
  */