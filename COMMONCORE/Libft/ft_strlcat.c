// #include <string.h>
#include <stdio.h>

static unsigned long	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned long	ft_strlcat(char *dest, char *src, unsigned long size)
{
	unsigned long	i;
	unsigned long	len_d;
	unsigned long	len_s;

	i = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (size + len_s);
	while (src[i] && i + len_d + 1 < size)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}

int main(void)
{
    // char dest[] = "Hello";
	// char src[] = "World";
	// unsigned long l = strlcat(dest, src, 11);
	// printf("Lib: %d %s\n", l, dest);

	char dest2[20];
	char src2[] = "World";
	unsigned long l2 = ft_strlcat(dest2, src2, 11);
	printf("My Lib: %ld %s\n", l2, dest2);
	return (0);
}
