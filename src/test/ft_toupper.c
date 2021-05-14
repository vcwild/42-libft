unsigned char	ft_toupper(char c)
{
	unsigned int	dist;

	dist = 'a' - 'A';
	if (c >= 'a' && c <= 'z')
		c = c - dist;
	return ((unsigned char)c);
}
