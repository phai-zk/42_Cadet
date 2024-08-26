
// #include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char			*str1;
	char			*str2;
	char			t_arr[128];

	i = -1;
	str1 = (char *)dest;
	str2 = (char *)src;
	while (str2[++i] >= '\0')
		t_arr[i] = str2[i];
	i = -1;
	while (++i < n)
		str1[i] = t_arr[i];
	str1[i+1] = '\0';
	return (dest);
}

// int main(void)
// {
// 	int n = 10;
// 	int posX1 = 10;
// 	int posX2 = 5;

// 	char dest1[50] = "ABCDEFG";
// 	printf("LIB\n");
// 	printf("Before:\t%s, %s\n",dest1 + posX1, dest1+posX2);
// 	memmove(dest1 + posX1, dest1+posX2, n*sizeof(char));
// 	printf("After:\t%s, %s\n\n",dest1 + posX1, dest1+posX2);
	
// 	char dest2[50] = "ABCDEFG";
// 	printf("MY LIB\n");
// 	printf("Before:\t%s, %s\n",dest2 + posX1, dest2+posX2);
// 	ft_memmove(dest2 + posX1, dest2+posX2, n*sizeof(char));
// 	printf("After:\t%s, %s\n\n",dest2 + posX1, dest2+posX2);
// 	return (0);
// }
