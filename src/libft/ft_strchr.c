/**
 * @brief Returns a pointer to the
 * first occurrence of the character c in the string s.
 *
 * @param s Pointer to the string memory area
 * @param c Character to be searched inside the string s
 * @return char* Return a pointer to the matched character
 * or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (&s[i]);
}
