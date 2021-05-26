int	ft_isalpha(int c)
{
	char	str;

	str = (char)c;
	if (((str >= 'A') && (str <= 'Z'))
		|| ((str >= 'a') && (str <= 'z')))
		return (1);
	return (0);
}
