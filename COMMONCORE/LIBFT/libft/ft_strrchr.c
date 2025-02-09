
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*str;

	i = -1;
	len = ft_strlen(s);
	str = (char *)s;
	c = (unsigned char)c;
	while (len - (++i) >= 0)
		if (str[len - i] == c)
			return (&(str[len - i]));
	return (NULL);
}
