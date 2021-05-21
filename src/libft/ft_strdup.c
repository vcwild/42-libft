#include "libft.h"

/**
 * @brief Returns a pointer to a new string
 * which is a duplicate of the string s.
 *
 * @param s1 Pointer to the start of the string do be copied
 * @return char* On success, returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory
 * was available, with errno set to indicate the cause of the
 * error.
 */
char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		size;

	size = ft_strlen(s1) + 1;
	cpy = (char *)malloc(size);
	if (cpy)
		ft_strlcpy(cpy, s1, size);
	return (cpy);
}
