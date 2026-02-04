/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:10:13 by miaviles          #+#    #+#             */
/*   Updated: 2025/11/04 18:29:50 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s2;
	size_t		start;
	size_t		end;
	size_t		c;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	s2 = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!s2)
		return (NULL);
	c = 0;
	while (end > start)
		s2[c++] = s1[start++];
	s2[c] = '\0';
	return (s2);
}

/* int	main(void)
{
	char	s1[] = "++++42+ali++++";
	char	*r = ft_strtrim(s1, "+");
		
	printf("%s\n", r);
	free (r);
	return (0);
} */