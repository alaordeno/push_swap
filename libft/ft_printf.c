/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:11:53 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/04 17:25:53 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_format(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += print_char((char)va_arg(args, int));
	else if (format == 's')
		len += print_string(va_arg(args, char *));
	else if (format == 'p')
		len += print_pointer((size_t)va_arg(args, void *));
	else if (format == 'u')
		len += ft_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (format == 'd' || format == 'i')
		len += ft_putnbr_fd(va_arg(args, int), 1);
	else if (format == 'X')
		len += print_hex(va_arg(args, unsigned int), 1);
	else if (format == 'x')
		len += print_hex(va_arg(args, unsigned int), 0);
	else if (format == '%')
		len += ft_putchar_fd('%', 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	arg;

	len = 0;
	i = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != 0)
		{
			len += print_format(arg, format[i + 1]);
			i++;
		}
		else
			len += print_char(format[i]);
		i++;
	}
	va_end(arg);
	return (len);
}

/* int	main (void)
{
	printf("origin: %d\n", 1);
	ft_printf("mia: %d\n", 1); 
}
/* 

#include <stdio.h>

int	main(void)
{
	int original_print_return;
	int fake_print_return;
	
	fake_print_return = ft_printf("Esto es un caracter: %c\n", 'W');
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un caracter: %c\n", 'W');
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un string: %s\n", "Hola que tal?");
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un string: %s\n", "Hola que tal?");
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un string NULL: %s\n", (char *)NULL);
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un string NULL: %s\n", (char *)NULL);
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un entero negativo: %d\n", -42);
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un entero negativo: %d\n", -42);
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un unsigned int: %u\n", 42);
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un unsigned int: %u\n", 42);
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un hex en minusculas: %x\n", 255);
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un hex en minusculas: %x\n", 255);
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un hex 0 en minusculas: %x\n", 0);
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un hex 0 en minusculas: %x\n", 0);
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un hex en mayusculas: %X\n", 255);
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un hex en mayusculas: %X\n", 255);
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un hex 0 en mayusculas: %X\n", 0);
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un hex 0 en mayusculas: %X\n", 0);
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	int	n = 42;
	fake_print_return = ft_printf("Esto es un puntero: %p\n", &n);
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un puntero: %p\n", &n);
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un porcentaje: %%\n");
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un porcentaje: %%\n");
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);

	if (original_print_return != fake_print_return)
		ft_putstr_fd("ALERTA, ALERTA!\n\n", STDERR_FILENO);

	fake_print_return = ft_printf("Esto es un vacío: %p\n", NULL);
	ft_putnbr_fd(fake_print_return, 2);
	ft_putchar_fd('\n', 2);
	original_print_return = printf("Esto es un vacío: %p\n", NULL);
	ft_putnbr_fd(original_print_return, 2);
	ft_putchar_fd('\n', 2);
	
	return (0);
} */