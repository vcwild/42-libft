#define FALSE	0
#define TRUE	1

unsigned int	ft_isascii(char *str)
{
	unsigned int	i;

	i = 0;
	while(str[i])
	{
		if(!(str[i] >= 0 && str[i] <= 127))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
