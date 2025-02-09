
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	i = (*nptr == '-' || *nptr == '+') - 1;
	while (nptr[++i] && ft_isdigit(nptr[i]))
		result = (result * 10) + (nptr[i] - '0');
	return (result * sign);
}
