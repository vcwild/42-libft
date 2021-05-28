#include <stdio.h>

unsigned int ft_isalpha(char *str);

int	main(void)
{
	char one[] = "Brubebs";
	char two[] = "C4fe";
	char three[] = "\t\r\n\v%d";
	int response = 0;

	response = ft_isalpha(one);
	printf("is `%s` alphabetic? %d\n", one, response);
	response = ft_isalpha(two);
	printf("is `%s` alphabetic? %d\n", two, response);
	response = ft_isalpha(three);
	printf("is `%s` alphabetic? %d\n", three, response);
}