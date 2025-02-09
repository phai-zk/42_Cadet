
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	if ((!dest || !src) && !size)
		return (0);
	i = -1;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (size + len_s);
	while (src[++i] && i + len_d + 1 < size)
		dest[len_d + i] = src[i];
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
