int	ft_isdigit(int c)
{
	char	str;

	str = (char)c;
	if ((str >= '0' && str <= '9'))
		return (1);
	return (0);
}
