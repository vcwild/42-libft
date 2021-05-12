#define FALSE	0
#define TRUE	1

unsigned int	ft_isprint(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\t' ||
			str[i] == '\v' ||
			str[i] == '\r' ||
			str[i] == '\n' ||
			str[i] == '\f')
			return (FALSE);
		i++;
	}
	return (TRUE);
}