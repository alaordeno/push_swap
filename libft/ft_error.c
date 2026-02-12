/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:16:57 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/11 19:20:17 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void	ft_error(char *str, t_bool e) //estructura booleana, devuelve true o false, o 1 o 0...
{
	int	len;

	len = ft_strlen(str);
	write(2, str, len);
	if (e)
		exit(EXIT_FAILURE)
}