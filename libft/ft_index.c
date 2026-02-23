
#include "libft.h"

int	ft_index(int n; int *array)
{
	int	i;

	i = 0;
	while (array[i] != n)
		i++;
	return (i);
}
