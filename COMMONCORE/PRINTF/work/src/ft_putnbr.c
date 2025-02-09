
#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	char	*str;
	int		length;

	str = ft_itoa(n);
	length = ft_putstr(str);
	free(str);
	return (length);
}

int	ft_putunnbr(unsigned int n)
{
	char	*str;
	int		length;

	str = ft_unitoa(n);
	length = ft_putstr(str);
	free(str);
	return (length);
}
