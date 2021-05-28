#include <stdio.h>

char	*ft_strchr(const char *str, int c);

int	main(void)
{
	char string[] = "Ola meu querido";
	char letter1 = 'm';
	char letter2 = 'j';
	char *p;

	p = ft_strchr(string, letter1);
	printf("when found: `%s`\n", p);
	p = ft_strchr(string, letter2);
	printf("when not found: `%s`\n", p);
}
