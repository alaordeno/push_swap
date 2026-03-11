/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:25:23 by alaorden          #+#    #+#             */
/*   Updated: 2026/03/11 16:13:59 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** -------------------------------------------------------------------------
** Static functions: Only accessible within this file.
** ft_count_sub   -> Counts the total number of words (substrings).
** ft_len_sub     -> Measures the length of each individual word.
** ft_copy_sub    -> Allocates memory and copies a word into it.
** ft_split_clean -> Frees all allocated memory in case of an error (failsafe).
** ft_split       -> Orchestrates the process and returns the array of strings.
** -------------------------------------------------------------------------
*/

#include "libft.h"

static int	ft_count_sub(char const *s, char c)
{
	size_t	i;
	size_t	co;

	if (!s)
		return (0);
	i = 0;
	co = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			co++;
		else if (s[i] != c && i > 0 && s[i - 1] == c)
			co++;
		i++;
	}
	return (co);
}

static int	ft_len_sub(char const *s, size_t *i, char c)
{
	size_t	l;
	size_t	f;

	f = *i;
	while (s[*i] && s[*i] != c)
		i[0]++;
	l = *i - f;
	return (l);
}

static char	*ft_copy_sub(char const *start, size_t len)
{
	size_t	count;
	char	*str;

	if (!start)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	count = 0;
	while (count < len)
	{
		str[count] = start[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}

static char	**ft_split_clean(char **array, size_t len)
{
	if (!array)
		return (NULL);
	while (len)
		free(array[--len]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	char		**array;
	const char	*str;

	if (!s)
		return (NULL);
	array = ft_calloc(ft_count_sub(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			str = &s[i];
			array[j++] = ft_copy_sub(str, ft_len_sub(s, &i, c));
			if (!array[j - 1])
				return (ft_split_clean(array, j - 1));
		}
		else
			i++;
	}
	return (array);
}

/* int main(void)
{
	char x[] = "hola mundo";
	char c = ' ';
	int	l = 0;
	char **y = ft_split(x, c);
	while (y[l] != NULL)
	{
		printf("[%d] %s\n", l, y[l]);
		l++;
	}	
	l = 0;
	while (y[l] != NULL)
		free (y[l++]);
	free(y);
	return (0);
}  */
