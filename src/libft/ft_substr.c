#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a substringfrom the string ’s’.
 * The substring begins at index ’start’ and is ofmaximum size ’len’.
 *
 * @param s		The string from which to create the substring.
 * @param start	The start index of the substring in the string’s’.
 * @param len	The maximum length of the substring.
 * @return char* Returns the substring. NULL if the allocation fails.
 */
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while ((i < len)
			&& (s[start + i] != '\0')
			&& ((start + i) < ft_strlen(s)))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
