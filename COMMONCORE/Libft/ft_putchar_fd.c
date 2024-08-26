
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    write(fd, &c, sizeof(c));
}

// int main()
// {
//     ft_putchar_fd('A', 0);
//     ft_putchar_fd('\n', 0);
//     ft_putchar_fd('B', 1);
//     ft_putchar_fd('\n', 0);
//     ft_putchar_fd('C', 2);
//     ft_putchar_fd('\n', 0);
//     return 0;
// }
