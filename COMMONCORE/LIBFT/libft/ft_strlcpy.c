
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = -1;
	while (src[++i] && i < (size - 1))
		dest[i] = src[i];
	dest[i] = '\0';
	return (len);
}
