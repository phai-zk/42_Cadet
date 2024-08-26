// #include <string.h>
// #include <stdio.h>

unsigned long	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main(int argc, char *argv[])
// {
//     (void)argc;
//     printf("Lib:\t%ld\nMyLib:\t%ld\n", strlen(argv[1]), ft_strlen(argv[1]));
//     return 0;
// }
