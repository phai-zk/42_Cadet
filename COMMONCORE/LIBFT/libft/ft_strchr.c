
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = -1;
	str = (char *)s;
	c = (unsigned char)c;
	while (str[++i])
		if (str[i] == c)
			return (&(str[i]));
	if (str[i] == c)
		return (&(str[i]));
	return (NULL);
}
