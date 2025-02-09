
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			i;

	if ((long)nmemb < 0 && (long)size < 0)
		return (NULL);
	i = -1;
	arr = (void *)malloc(nmemb * size);
	if (!arr)
		return (NULL);
	while (++i < nmemb * size)
		arr[i] = 0;
	return (arr);
}
