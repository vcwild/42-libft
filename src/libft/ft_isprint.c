/**
 * @brief Verifies if the character c is printable.
 *
 * @param c Character to be verified
 * @return int Returns 1 if c is printable, else returns false.
 */
int	ft_isprint(int c)
{
	char	str;

	str = (char)c;
	if (str == '\t'
		|| str == '\v'
		|| str == '\r'
		|| str == '\n'
		|| str == '\f')
		return (0);
	return (1);
}
