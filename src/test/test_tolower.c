#include <stdio.h>

unsigned char	ft_tolower(char c);

int	main(void)
{
	char test = 'A';
	unsigned char response;
	unsigned char response2;


	response = ft_tolower(test);
	printf("%c\n", response);
}
