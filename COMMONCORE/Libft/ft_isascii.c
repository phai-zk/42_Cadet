// #include <ctype.h>
// #include <stdio.h>

int	ft_isascii(int c)
{
	if (0 <= c && c < 128)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	for (int i = 0; i < 129; i++)
// 		printf("%c %d %d\n", i, __isascii(i), ft_isascii(i));
// 	return 0;
// }
