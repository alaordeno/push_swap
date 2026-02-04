/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:55:46 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/22 10:09:38 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		l;

	l = ft_strlen(s) + 1;
	str = (char *)malloc(l);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, l);
	return (str);
}

/* int	main(void)
{
	const char *x = "hola";
	char *y;

	y = ft_strdup(x);
	if (!y)
	{
		printf("No se ha podido duplicar.\n");
		return (1);
	}

	printf("Cadena original: %s\n", x);
	printf("Cadena duplicada: %s\n", y);

	free(y);	
	return  (0);
} 
 */