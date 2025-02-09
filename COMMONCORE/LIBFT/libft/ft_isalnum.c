
#include "libft.h"

int	ft_isalnum(int c)
{
	int	bit;

	bit = 11;
	if (ft_isdigit(c) || ft_isalpha(c))
		return ((1 << bit) >> 8);
	return (0);
}
