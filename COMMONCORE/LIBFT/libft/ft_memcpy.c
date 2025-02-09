
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	if (!dest && !src)
		return (NULL);
	i = -1;
	str1 = (char *)dest;
	str2 = (char *)src;
	while (++i < n)
		str1[i] = str2[i];
	return (dest);
}
