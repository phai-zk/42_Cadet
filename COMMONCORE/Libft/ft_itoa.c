
#include "libft.h"

char *ft_itoa(int n)
{
	int		size;
	int		sign;
	long	ln;
	char	*str;

	size = 1 + (n < 0);
	sign = 1;
	if (size == 2)
		sign = -1;
	n *= sign;
	ln = n;
	while ((n / 10) > 0 && ++size)
		n /= 10;
	str = (char *)malloc((size) * sizeof(char));
	while (--size >= 0)
	{
		str[size] = (ln % 10) + '0';
		ln /= 10;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}

// int main()
// {
// 	printf("\n%s", ft_itoa(-999));
// 	return 0;
// }
