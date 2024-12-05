#include "./main_work/get_next_line.h"

void Test2Line(int fd);
void TestLoop(int fd);

int main(int ac, char **av)
{
	char *str;
	if (ac != 2)
		str = ft_strdup("example.txt");
	else
		str = ft_strdup(av[1]);
	int fd = open(str, O_RDONLY);
	// char *s = (char *)malloc(10);
	// char *s2 = (char *)malloc(10);
	// read(fd, s, 10);
	// printf("%ld\n", read(fd, s2, 10));
	// printf("%s\n", s2);
	// Test2Line(fd);
	TestLoop(fd);
	free(str);
	return 0;
}

// void Test2Line(int fd)
// {
// 	char *str;

// 	str = get_next_line(fd);
// 	printf("line 1 : %s\n", str);
// 	str = get_next_line(fd);
// 	printf("line 2 : %s\n", str);
// }

void TestLoop(int fd)
{	
	char *str;
	int i = 0;

	while ((str = get_next_line(fd))){
		printf("line %d : @%s@\n", ++i, str);
		free(str);
	}
	free(str);
}
