
// #include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	int	bit;

	bit = 3;
	if ('0' <= c && c <= '9')
		return ((1 << bit) << 8);
	return (0);
}

// int	main(void)
// {
// 	for (int i = 0; i < 129; i++)
// 		printf("%c %d %d\n", i, isdigit(i), ft_isdigit(i));
// 	return 0;
// }
