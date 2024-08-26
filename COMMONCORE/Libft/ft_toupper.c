// #include <ctype.h>
// #include <stdio.h>

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	return c;
}

// int main(void)
// {
//     unsigned char c = 'a';
//     printf("That Char is %c\n", c);
//     printf("Lib:\t%c\n", toupper(c));
//     printf("My Lib:\t%c\n", ft_toupper(c));
//     return 0;
// }
