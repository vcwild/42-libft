#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, int n);

int	main(void)
{
	char test1[] = "luiscals";
	char test2[] = "luiscals";
	char test3[] = "luiscal";
	int is_same;

	is_same = ft_strncmp(test1, test2, 9);
	printf("Are `%s` and `%s` the same? %d\n", test1, test2, is_same);

	is_same = ft_strncmp(test1, test3, 9);
	printf("Are `%s` and `%s` the same? %d\n", test1, test3, is_same);

	is_same = ft_strncmp(test1, test3, 5);
	printf("Are `%.5s` and `%.5s` the same? %d\n", test1, test3, is_same);

	is_same = ft_strncmp(test3, test1, 9);
	printf("Are `%s` and `%s` the same? %d\n", test3, test1, is_same);
}
