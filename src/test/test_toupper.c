#include <stdio.h>

unsigned char	ft_toupper(char c);

int	main(void)
{
	char test = 'd';
	unsigned char response;

	response = ft_toupper(test);

	printf("%c\n", response);
}
