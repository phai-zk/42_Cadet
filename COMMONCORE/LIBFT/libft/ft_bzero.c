
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = -1;
	while (++i < n)
		str[i] = '\0';
}
