#include <stdio.h>

unsigned int ft_isdigit(char *str);

int	main(void)
{
	char one[] = "4390583405v349580349";
	char two[] = "C4fe";
	char three[] = "\t\r\n\v%d";
	char four[] = "2";
	char five[] = "556667";
	int response = 0;

	response = ft_isdigit(one);
	printf("is `%s` is only numeric?\t%d\n", one, response);
	response = ft_isdigit(two);
	printf("is `%s` is only numeric?\t\t%d\n", two, response);
	response = ft_isdigit(three);
	printf("is `%s` is only numeric?\t\t%d\n", three, response);
	response = ft_isdigit(four);
	printf("is `%s` is only numeric?\t%d\n", four, response);
	response = ft_isdigit(five);
	printf("is `%s` is only numeric?\t%d\n", five, response);
}
