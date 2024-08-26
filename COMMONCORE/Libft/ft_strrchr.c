// #include <string.h>
// #include <stdio.h>

static unsigned long	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	i = -1;
	len = ft_strlen(s);
	char *str = (char *)s;
	while (len - (++i) >= 0)
		if (str[len - i] == c)
			return (&(str[len - i]));
	return ('\0');
}

// int main(void)
// {
//     char *str1 = "_ABCOCBA_";
//     char *str2 = "_ABCOCBA_";
//     unsigned char find = 'C';

//     printf("LIB:\t%s,\t %s\n", strrchr(str1, find), str1);
//     printf("MY LIB:\t%s,\t %s\n", ft_strrchr(str2, find), str2);
//     return (0);
// }