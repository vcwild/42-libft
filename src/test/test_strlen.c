#include <stdio.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	char str[] = "Felps";
	int i = 0;

	i = ft_strlen(str);

	printf("size of str: %d\n", i);
}
