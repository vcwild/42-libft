/**
 * @brief Verifies if the character c is alphabetic.
 * 
 * @param c Character to be analysed
 * @return int Returns true if c is alphabetical, else returns false.
 */
int	ft_isalpha(int c)
{
	char	str;

	str = (char)c;
	if (((str >= 'A') && (str <= 'Z'))
		|| ((str >= 'a') && (str <= 'z')))
		return (1);
	return (0);
}
