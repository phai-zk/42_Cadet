
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dest;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	i = -1;
	if (tmp_dest > tmp_src)
		while (n-- > 0)
			tmp_dest[n] = tmp_src[n];
	else
		while (++i < n)
			tmp_dest[i] = tmp_src[i];
	return (dest);
}
