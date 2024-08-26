// #include <ctype.h>
// #include <stdio.h>

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'B')
		return (c + 'a' - 'A');
	return c;
}

// int main(void)
// {
//     unsigned char c = 'Z';
//     printf("That Char is %c\n", c);
//     printf("Lib:\t%c\n", tolower(c));
//     printf("My Lib:\t%c\n", ft_tolower(c));
//     return 0;
// }
