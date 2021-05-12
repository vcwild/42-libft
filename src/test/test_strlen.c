#include <stdio.h>

int	ft_strlen(char *array);

int	main(void)
{
	char str[] = "Felps";
	int i = 0;

	i = ft_strlen(str);

	printf("size of str: %d\n", i);
}
