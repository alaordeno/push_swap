/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:45:43 by alaorden          #+#    #+#             */
/*   Updated: 2025/11/04 16:38:29 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *x, int y)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] == (char)y)
			return ((char *)&x[i]);
		else
			i++;
	}
	if ((char)y == '\0')
		return ((char *)&x[i]);
	return (NULL);
}

/* int	main(void)
{
	char 	y = 'm';
	char	x[] = "hola mundo";
	
	printf("%s", ft_strchr(x, y));
	return (0);
}
 */