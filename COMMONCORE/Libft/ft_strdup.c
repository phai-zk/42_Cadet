
// #include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*dest;

	len = ft_strlen(s);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return ("\0");
	i = -1;
	while (s[++i])
		dest[i] = s[i]; 
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	char	*str;
// 	char	*allocated;

// 	str = "Hello World";
// 	printf("base\t : String: %s; \tAddress: @%p\n", str, str);
// 	allocated = strdup(str);
// 	printf("LIB\t : String: %s; \tAddress: @%p\n", allocated, allocated);
// 	allocated = ft_strdup(str);
// 	printf("MY LIB\t : String: %s; \tAddress: @%p\n", allocated, allocated);
// 	return (0);
// }
