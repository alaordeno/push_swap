/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:20:53 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/04 17:24:33 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(long n, int fd)
{
	size_t	len;

	len = 0;
	if (n == (-__LONG_MAX__ - 1))
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 223372036854775808;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		len++;
		n = -n;
	}
	if (n >= 10)
	{
		len += ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
	return (len + 1);
}

/* int	main(void)
{
	ft_putnbr_fd(-1254, 1);
	return (0);
}  */