int	ft_toupper(int c)
{
	char	dist;
	char	str;

	dist = 'a' - 'A';
	str = (char)c;
	if (str >= 'a' && str <= 'z')
		str -= dist;
	return ((int)str);
}
