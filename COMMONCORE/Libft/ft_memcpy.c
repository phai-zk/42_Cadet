
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char			*str1;
	char			*str2;

	i = -1;
	str1 = (char *)dest;
	str2 = (char *)src;
	while (++i < n)
		str1[i] = str2[i];
	return (dest);
}

// int main(void)
// {
// 	int n = 55;

// 	// Lib Test
// 	char src1[20] = "A";
// 	char dest1[50] = "SDAS";
// 	// My Test
// 	char src2[20] = "A";
// 	char dest2[50] = "SDAS";

// 	printf("LIB\n");
// 	printf("Before:\t%s, %s\n", dest1, src1);
// 	memcpy(dest1, src1, n * sizeof(char));
// 	printf("After:\t%s, %s\n\n", dest1, src1);

// 	printf("MY LIB\n");
// 	printf("Before:\t%s, %s\n", dest2, src2);
// 	ft_memcpy(dest2, src2, n * sizeof(char));
// 	printf("After:\t%s, %s\n\n", dest2, src2);
// 	return (0);
// }
