
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*(s++), fd);
}

// int main()
// {
// 	char *str = "Hello World";
// 	ft_putstr_fd(str, 0);
// 	return 0;
// }
