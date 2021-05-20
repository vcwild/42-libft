#include "libft.h"

/**
 * @brief calculates the length of the string
 * pointed to by s, excluding the terminating null byte ('\0').
 *
 * @param s Pointer to the initial area of the string
 * @return size_t Returns the number of bytes in the
 * string pointed to by s.
 */
size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (*s++)
		n++;
	return (n);
}
