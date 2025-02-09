
#include "../ft_printf.h"

int	ft_putptr(unsigned long long pointer)
{
	int	length;

	if (!pointer)
		return (ft_putstr("(nil)"));
	length = ft_putstr("0x");
	length += ft_putptrhex(pointer, "0123456789abcdef");
	return (length);
}
