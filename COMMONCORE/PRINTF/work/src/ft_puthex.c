
#include "../ft_printf.h"

static int	count_unit(unsigned int nbr)
{
	int	hex;
	int	count;

	hex = 16;
	count = 1;
	while (nbr / hex > 0 && ++count)
		nbr /= hex;
	return (count);
}

static int	count_unlonglong_unit(unsigned long long nbr)
{
	int	hex;
	int	count;

	hex = 16;
	count = 1;
	while (nbr / hex > 0 && ++count)
		nbr /= hex;
	return (count);
}

int	ft_puthex(unsigned int nbr, char *base_code)
{
	int		hex;
	char	*str;
	int		size;
	int		length;

	hex = 16;
	length = 0;
	size = count_unit(nbr);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (0);
	str[size] = '\0';
	while (--size >= 0)
	{
		str[size] = base_code[nbr % hex];
		nbr /= hex;
	}
	length += ft_putstr(str);
	free(str);
	return (length);
}

int	ft_putptrhex(unsigned long long nbr, char *base_code)
{
	int		hex;
	char	*str;
	int		size;
	int		length;

	hex = 16;
	size = count_unlonglong_unit(nbr);
	length = 0;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (0);
	str[size] = '\0';
	while (--size >= 0)
	{
		str[size] = base_code[nbr % hex];
		nbr /= hex;
	}
	length += ft_putstr(str);
	free(str);
	return (length);
}
