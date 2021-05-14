/*Falta passar norminette*/

unsigned int	ft_isalpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(((str[i] >= 'A') && (str[i] <= 'Z'))
				|| ((str[i] >= 'a') && (str[i] <= 'z'))))
			return (0);
		i++;
	}
	return (1);
}
