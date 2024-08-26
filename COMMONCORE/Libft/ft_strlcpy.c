
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	while (src[++i] && !dest[i + 1] && i < size)
		dest[i] = src[i];
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

// int main(void)
// {
// 	char dest[15];
// 	char *src = "Hello, World!";
// 	size_t length = ft_strlcpy(dest, src, 20);

// 	printf("Destination: %s\n", dest);
// 	printf("Length of source: %zu\n", length);
// 	return 0;
// }
