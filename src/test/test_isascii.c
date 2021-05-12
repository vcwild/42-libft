#include <stdio.h>

unsigned int ft_isascii(char *str);

int	main(void)
{
	char one[] = "Brubebs";
	char two[] = "C4fe";
	char three[] = "\t\r\n\v%d";
	char four[] = ")*(²³¤¤€€";
	char five[] = "ø¶¶øgbhbµç¿";
	int response = 0;

	response = ft_isascii(one);
	printf("is `%s` is from ASCII table?\t%d\n", one, response);
	response = ft_isascii(two);
	printf("is `%s` is from ASCII table?\t\t%d\n", two, response);
	response = ft_isascii(three);
	printf("is `%s` is from ASCII table?\t\t%d\n", three, response);
	response = ft_isascii(four);
	printf("is `%s` is from ASCII table?\t%d\n", four, response);
	response = ft_isascii(five);
	printf("is `%s` is from ASCII table?\t%d\n", five, response);
}
