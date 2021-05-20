/**
 * @brief Verifies if the character c is a number.
 *
 * @param c Character to be verified
 * @return int Returns true if c is a number, else returns false.
 */
int	ft_isdigit(int c)
{
	char str;

	str = (char)c;
	if ((str >= '0' && str <= '9'))
		return (1);
	return (0);
}
