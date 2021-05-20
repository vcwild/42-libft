/**
 * @brief Verifies if the character c is alphanumeric.
 * 
 * @param c Character to be verified
 * @return int Returns 1 if c is alphanumeric, else returns 0.
 */
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
