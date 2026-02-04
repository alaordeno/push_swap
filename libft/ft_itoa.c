/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:27:49 by alaorden          #+#    #+#             */
/*   Updated: 2025/11/04 16:32:58 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*x;
	long	num;

	num = (long)n;
	len = ft_intlen(n);
	x = (char *)malloc(sizeof(char) * (len + 1));
	if (!x)
		return (NULL);
	x[len--] = '\0';
	if (num == 0)
		x[0] = '0';
	if (num < 0)
	{
		x[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		x[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (x);
}

/*  int	main(void)
{
	char	*x = ft_itoa(INT_MAX);
	
	printf("%s\n", x);
}
 */