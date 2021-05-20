#include "libft.h"

/**
 * @brief compares the first n bytes (each interpreted
 * as unsigned char) of the memory areas s1 and s2.
 *
 * @param s1 Pointer to the first memory area to be compared
 * @param s2 Pointer to the second memory area to be compared
 * @param n Buffer size in bytes
 * @return int Returns an integer less  than,  equal
 * to,  or  greater  than  zero  if the first n bytes of s1 is
 * found, respectively, to be  less  than,  to  match,  or  be
 * greater than the first n bytes of s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	if (n == 0)
		return ((int)n);
	while (*one++ == *two++ & n-- > 0)
	{
		if (*one != *two)
			return ((int)(*one - *two));
		if (n == 0)
			return ((int)n);
	}
	return (0);
}
