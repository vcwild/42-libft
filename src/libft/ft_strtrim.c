#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns
 * a copy of ’s1’ with the characters specified
 * in ’set’ removed from the beginning and the
 * end of the string.
 *
 * @param s1 The string to be trimmed
 * @param set The set of characters to trim
 * @return char* Returns the trimmed string,
 * or NULL if allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while ((*s1) && (ft_strchr(set, *s1)))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	size = len + 1;
	return (ft_substr(s1, 0, size));
}
