
#include "libft.h"

int	ft_isprint(int c)
{
	int	bit;

	bit = 6;
	if (' ' <= c && c <= '~')
		return ((1 << bit) << 8);
	return (0);
}
