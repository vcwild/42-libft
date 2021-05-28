int	ft_tolower(int c)
{
	char	dist;
	char	str;

	dist = 'a' - 'A';
	str = (char)c;
	if (str >= 'A' && str <= 'Z')
		str += dist;
	return ((int)str);
}
