/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:16:57 by alaorden          #+#    #+#             */
/*   Updated: 2026/03/11 16:11:08 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** -------------------------------------------------------------------------
** Handles program errors by printing a message to the 
** Standard Error output (File Descriptor 2). 
** - If 'e' (boolean) is TRUE: The program terminates immediately using 
** exit(EXIT_FAILURE), ensuring no further code is executed.
** - If 'e' is FALSE: It only prints the message and returns control 
** to the calling function.
** -------------------------------------------------------------------------
*/

void	ft_error(char *str, t_bool e)
{
	int	len;

	len = ft_strlen(str);
	write(2, str, len);
	if (e)
		exit(EXIT_FAILURE);
}
