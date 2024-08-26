
// #include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	int	bit;

	bit = 11;
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return ((1 << bit) >> 8);
	return (0);
}

// int	main(void)
// {
// 	for (int i = 0; i < 129; i++)
// 		printf("%c %d %d\n", i, isalnum(i), ft_isalnum(i));
// 	return 0;
// }
