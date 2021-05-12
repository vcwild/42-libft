#define TRUE	1
#define FALSE	0

unsigned int	ft_isalnum(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(((str[i] >= 'A') && (str[i] <= 'Z')) ||
			  ((str[i] >= 'a') && (str[i] <= 'z')) ||
			  ((str[i] >= '0') && (str[i] <= '9'))))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
