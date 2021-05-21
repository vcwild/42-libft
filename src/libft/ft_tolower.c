/**
 * @brief Converts uppercase character to lowercase.
 * 
 * @param c Character to be converted
 * @return int Returns converted lowercase character.
 */
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
