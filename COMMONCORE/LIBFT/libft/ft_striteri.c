
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	while (s[++i])
		(*f)(i, &s[i]);
}
