
#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int		i;
	char	*str;

	str = s;
	if (!s)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	if (!s)
		free(str);
	return (i);
}
