
#include "libft.h"

int	ft_isalpha(int c)
{
	int	bit;

	bit = 2;
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return ((1 << bit) << 8);
	return (0);
}
