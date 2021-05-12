unsigned char	ft_tolower(char c)
{
	unsigned int	dist;

	dist = 'a' - 'A';
	if (c >= 'A' && c <= 'Z')
		c = c + dist;
	return ((unsigned char)c);
}
