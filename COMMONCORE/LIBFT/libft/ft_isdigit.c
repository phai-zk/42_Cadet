
#include "libft.h"

int	ft_isdigit(int c)
{
	int	bit;

	bit = 3;
	if ('0' <= c && c <= '9')
		return ((1 << bit) << 8);
	return (0);
}
