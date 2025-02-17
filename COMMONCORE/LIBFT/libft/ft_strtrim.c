
#include "libft.h"

static int	check(const char str, const char *sub)
{
	while (*sub)
		if (str == *(sub++))
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	start;
	size_t	end;

	len = ft_strlen(s1);
	start = 0;
	while (check(*(s1 + start), set))
		start++;
	end = len - 1;
	while (end > 0 && check(*(s1 + (end)), set))
		end--;
	str = ft_substr(s1, start, (end - start + 1));
	return (str);
}
