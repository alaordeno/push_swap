/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:45:57 by alaorden          #+#    #+#             */
/*   Updated: 2026/02/12 18:54:22 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_limits(char *num_str) //? num_str convierte numeros en string
{
	long	num;
	
	num = ft_atol
}

void	fill_array(int argc, char **argv, int *array)
{
	int		i;
	int		j;
	int		index;
	char	**split;
	
	i = 1;
	index = 0;
	while (i < argc)
	{
		split = ft_split(argv[i], ' '); //encontrar con la funcion el split el espacio
		if(!split)
			ft_error_clean("", TRUE, split); //! no entiendo, si "" error y liberamos?
		j = 0;
		while (split[j])
		{
			check_limits(split[j])
		}	
	}
}

static void	check_imput_validity(char *s, int *i) // !funcion creada con ia, revisar si no peta //!, 
{
	if (s[*i] == '+' || s[*i] == '-') //si es signo avanzamos
		(*i)++;
	if(!ft_isdigit(s[*i]))
		(*i)++;
	if(s[*i] != ' ' && s[*i] != '\0')
		ft_error("Error\n", TRUE);
	//  ESTA FUNCION NO DEVUELVE NADA, ES CORRECTO? si es correcto prq es un void
}

int	count_nmb(int argc, char **argv) // !la he intentado optimizar, revisar
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 1;
	while (1 < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			while (argv[i][j] == ' ') //si encontramos espacio, itermos
				j++;
			if (argv[i][j] == '\0') //cuando llegamos al final de string, paramos el bucle
				break; //mirar si se puede usar	
			check_input_validity(argv[i], &j);
			count++;
		}
		i++;
	}
	return (count);
}


int	*parse_input(int argc, char **argv, int	*count) //poner en el header
{
	int *array;

	if (!argv[0])
		*count = 0; //control de errores
	*count = count_nmb(argc, argv);
	if (*count == 0)
		ft_error("Error\n", TRUE);
	array = (int *)malloc(sizeof(int) * (*count));
	if (!array)
		ft_error("Error\n", TRUE); //? el true tieme que ser si,pre en mayusculas?
	fill_array(argc, argv, array);
	
}