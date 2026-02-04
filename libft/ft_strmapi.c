/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:17:36 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/22 12:55:44 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	a = (char *)malloc(ft_strlen(s) + 1);
	if (!a)
		return (NULL);
	i = 0;
	while (s[i])
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}

/* char	to_uppercase(unsigned int i, char c)
{
    (void)i;

    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int	main(void)
{
    char *str = "hola mundo";
    char *result;

    result = ft_strmapi(str, to_uppercase);

    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return (0);
} */