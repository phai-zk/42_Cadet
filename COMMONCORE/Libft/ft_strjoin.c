
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!str)
		return ('\0');
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *s1 = "Hello ";
// 	char *s2 = "World!";

// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return 0;
// }
