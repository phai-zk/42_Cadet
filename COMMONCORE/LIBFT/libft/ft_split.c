
#include "libft.h"

static void	*ft_free(char **str_arr, int size)
{
	int	i;

	i = -1;
	while (++i <= size)
		free(str_arr[i]);
	free(str_arr);
	return (NULL);
}

int	counting_word(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	*get_word(char *s, char c)
{
	int		i;
	int		len;
	char	*str;

	i = -1;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (++i < len)
		str[i] = s[i];
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*tmp;
	int		size;
	int		i;

	tmp = (char *)s;
	size = counting_word(tmp, c);
	i = 0;
	strs = (char **)ft_calloc(size + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	while (i < size)
	{
		if (*tmp == c)
			tmp++;
		else
		{
			strs[i] = get_word(tmp, c);
			if (!strs[i])
				return (ft_free(strs, i));
			tmp += ft_strlen(strs[i]);
			i++;
		}
	}
	return (strs);
}
