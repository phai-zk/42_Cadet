
#include "libft.h"

static int	countWord(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s != '\0')
			count++;
		while (*s && !(*s == c))
			s++;
	}
	return (count);
}

static char	*getWord(char *s, char c)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	while (s[len] && !(s[len] == c))
		len++;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return('\0');
	i = -1;
	while (++i < len)
		str[i] = s[i];
	return (str);
}

char **ft_split(char const *s, char c)
{
	char **strArr;
	int size;
	int i;

	size = countWord((char *)s, c);
	strArr = (char **)malloc(size * sizeof(char *));
	if (!strArr)
		return ('\0');
	i = -1;
	while (*s && (++i < size))
	{
		while (*s && (*s == c))
			s++;
		strArr[i] = ft_strdup(getWord((char *)s, c));
		while (*s && !(*s == c))
			s++;
	}
	return (strArr);
}

// int main(void)
// {
// 	char *s = "  Hello World !   ";
// 	char c = ' ';
// 	int len = countWord(s, c);
	
// 	char **str = ft_split(s, c);
// 	int i = -1;
// 	while (++i < len)
// 		printf("%s, ", str[i]);
// 	printf("\n");
// 	return 0;
// }
