#include "libft.h"
#include <string.h>

int	main()
{
	char *dest = "lorem ipsum dolor sit amet";
	char *dest2 = "lorem ipsum dolor sit amet";
	memmove(dest, "consectetur", 5);
	printf("%s\n", dest);
	// ft_memmove(dest2, "consectetur", 5);
	// printf("%s\n", dest2);
	return (0);
}
