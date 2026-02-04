/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:50:17 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/04 16:10:08 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_string(char *str)
{
	int	len;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen (str);
	write(1, str, len);
	return (len);
}

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	print_pointer(size_t ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (print_string("(nil)"));
	write(1, "0x", 2);
	len += print_hex(ptr, 0);
	return (len + 2);
}

size_t	print_hex(size_t n, int upper)
{
	int	len;

	len = 0;
	if (n == 0)
		return (len += print_char('0'));
	if (n >= 16)
		len += print_hex(n / 16, upper);
	if (n % 16 <= 9)
		len += print_char((n % 16 + '0'));
	else if (!upper)
		len += print_char(n % 16 - 10 + 'a');
	else if (upper)
		len += print_char(n % 16 - 10 + 'A');
	return (len);
}

/* static int put_unsigned(unsigned long n, int fd)
{
	int	len;
	
	len = 0;
	if (n >= 10)
		len += put_unsigned(n / 10, fd);
	len += ft_putchar_fd((n % 10) + '0', fd);
	return (len);
}

 */