/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:16:57 by alaorden          #+#    #+#             */
/*   Updated: 2026/03/04 16:30:32 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *str, t_bool e)
{
	int	len;

	len = ft_strlen(str);
	write(2, str, len);
	if (e)
		exit(EXIT_FAILURE);
}
