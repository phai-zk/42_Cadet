
// #include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	
	str = (char *)s;
	while (*str)
	{
		*str = n;
		str++;
	}
}

// int main(void)
// {
// 	int pos = 1;

// 	char str[50] = "Lorem ipsum dolor sit amet consectetur adipisicing elit.";
// 	printf("\nBefore bzero():\t\t%s\n", str);
// 	bzero(str + pos, sizeof(char));
// 	printf("After bzero():\t\t%s\n", str);

// 	char str2[50] = "Lorem ipsum dolor sit amet consectetur adipisicing elit.";
//     printf("\nBefore ft_bzero():\t%s\n", str2);
// 	ft_bzero(str2 + pos, sizeof(char));
// 	printf("After ft_bzero():\t%s\n", str2);
// }
