// #include <ctype.h>
// #include <stdio.h>

int	ft_isalpha(int c)
{
	int	bit;
	
	bit = 2;
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return ((1 << bit) << 8);
	return (0);
}

// int	main(void)
// {
// 	for (int i = 0; i < 129; i++)
// 		printf("%c %d %d\n", i, isalpha(i), ft_isalpha(i));
// 	return 0;
// }
