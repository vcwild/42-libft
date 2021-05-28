int	ft_isalnum(int c)
{
	char	str;

	str = (char)c;
	if (!(((str >= 'A') && (str <= 'Z'))
			|| ((str >= 'a') && (str <= 'z'))
			|| ((str >= '0') && (str <= '9'))))
		return (0);
	return (1);
}
