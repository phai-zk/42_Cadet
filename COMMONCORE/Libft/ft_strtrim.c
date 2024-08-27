/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:33:14 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:33:39 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *big, const char *little)
{
	int	i;

	i = -1;
	while (little[++i])
		if (big[i] != little[i])
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		setlen;
	int		start;
	int		end;

	len = ft_strlen(s1);
	setlen = ft_strlen(set);
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return ("\0");
	start = 0;
	while (start < len && check(s1 + start, set))
		start += setlen;
	end = setlen;
	while (len - end >= 0 && check(s1 + (len - end), set))
		end += setlen;
	str = ft_substr(s1, start, len - (start + end - setlen));
	return (str);
}

// int main(void)
// {
// 	char	*s1 = "ABCABCAAAABC";
// 	char	*set = "ABC";
// 	printf("%s\n", ft_strtrim(s1, set));
// 	return 0;
// }
