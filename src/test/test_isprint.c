#include <stdio.h>

unsigned int ft_isprint(char *str);

int	main(void)
{
	char one[] = "Brubebs";
	char two[] = "C4fe";
	char three[] = "\t\r\n\v%d";
	int response = 0;

	response = ft_isprint(one);
	printf("is `%s` is printable? %d\n", one, response);
	response = ft_isprint(two);
	printf("is `%s` is printable? %d\n", two, response);
	response = ft_isprint(three);
	printf("is `%s` is printable? %d\n", three, response);
}
