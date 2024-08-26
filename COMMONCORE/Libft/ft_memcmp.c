#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
	unsigned long	i;
	char			*str1;
	char			*str2;

	i = -1;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (++i < n && (str1[i] || str2[i]))
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	return (0);
}

int main(void)
{
	char *a = "16";
	char *b = "165";
	unsigned long n = 3;

	printf("LIB\t\t = %d\n", memcmp(a, b, n));
	printf("My LIB\t = %d\n", ft_memcmp(a, b, n));
	return 0;
}
