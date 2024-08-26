
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = -1;
	str = (char *)malloc(ft_strlen(s) * sizeof(char));
	while (s[++i])
		str[i] = (*f)(i, s[i]);
	return(str);
}

// static char testing(unsigned int i, char c)
// {
// 	printf("%d, %c\n", i, c);
// 	c -= i;
// 	return (c);
// }

// int main()
// {
// 	char *str = "Hello World";
// 	printf("\n%s\n", ft_strmapi(str, &testing));
// 	return 0;
// }
