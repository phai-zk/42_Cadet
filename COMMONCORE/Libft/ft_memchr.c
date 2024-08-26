// #include <string.h>
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned long	i;
	char			*str;

	i = -1;
	str = (char *)s;
	while (str[++i] && i < n)
		if (str[i] == c)
			return (&(str[i]));
	return ('\0');
}

// int main(void)
// {
// 	char *str1 = "_ABCOCBA_";
// 	char *str2 = "_ABCOCBA_";
// 	unsigned char find = 'C';
// 	unsigned long	n = 5;

// 	printf("LIB:\t%s,\t %s\n", (char *)memchr(str1, find, n), str1);
// 	printf("MY LIB:\t%s,\t %s\n", (char *)ft_memchr(str2, find, n), str2);
// 	return (0);
// }
