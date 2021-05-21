#include <stdio.h>
#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a newstring,
 * which is the result of the concatenationof ’s1’ and ’s2’.
 *
 * @param s1 The prefix string
 * @param s2 The suffix string
 * @return char* Returns the new string or NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*pos;

	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL
		|| !s1
		|| !s2)
		return (NULL);
	pos = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (pos);
}
