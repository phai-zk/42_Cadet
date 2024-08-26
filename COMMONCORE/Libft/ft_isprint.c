// #include <ctype.h>
// #include <stdio.h>

int	ft_isprint(int c)
{
	int	bit;

	bit = 6;
	if (' ' <= c && c <= '~')
		return ((1 << bit) << 8);
	return (0);
}

// int	main(void)
// {
// 	for (int i = 0; i < 129; i++)
// 		printf("%c %d %d\n", i, isprint(i), ft_isprint(i));
// 	return 0;
// }
