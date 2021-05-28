#include <stdio.h>

unsigned int ft_isalnum(char *str);

int	main(void)
{
	char one[] = "Brubebs";
	char two[] = "C4fe";
	char three[] = "\t\r\n\v%d";
	int response = 0;

	response = ft_isalnum(one);
	printf("is `%s` alphanumeric? %d\n", one, response);
	response = ft_isalnum(two);
	printf("is `%s` alphanumeric? %d\n", two, response);
	response = ft_isalnum(three);
	printf("is `%s` alphanumeric? %d\n", three, response);
}