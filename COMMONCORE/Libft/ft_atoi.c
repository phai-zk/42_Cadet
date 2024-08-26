// #include <stdlib.h>
// #include <stdio.h>

static int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

static int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

static int	whiteSpace(int c)
{
	return ((7 <= c && c <= 13) || c == 20);
}

static char	*skipWhiteSpaceAndSign(char *c, int *sign)
{
	int	find_sign;
	int	i;

	find_sign = 0;
	i = -1;
	while (c[++i])
	{
		if (whiteSpace(c[i]) || find_sign || ft_isalnum(c[i]))
			return (&(c[i]));
		else if (c[i] == '-' || c[i] == '+')
		{
			if (c[i] == '-')
				*sign *= -1;
			find_sign = 1;
		}
	}
	return ("\0");
}

int ft_atoi(const char *nptr)
{
	int		result;
	int		sign;
	char	*nbstr;
	int		i;

	result = 0;
	sign = 1;
	nbstr = skipWhiteSpaceAndSign((char *)nptr, &sign);
	i = -1;
	while (nbstr[++i] && ft_isdigit(nbstr[i]))
		result = (result * 10) + (nbstr[i] - '0');
	return (result * sign);
}

// int main(int argc, char const *argv[])
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("LIB:\t%d\n", atoi(argv[1]));
// 	printf("MY LIB:\t%d\n", ft_atoi(argv[1]));
// 	return 0;
// }
