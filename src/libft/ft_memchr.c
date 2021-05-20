#include "libft.h"

/**
 * @brief Scans the initial n bytes of the memory area
 * pointed to by s for the first instance of c
 *
 * @param s Pointer to the initial memory area
 * @param c Character to be searched
 * @param n Buffer size
 * @return	Return a pointer str to the matching byte
 * or NULL if it does not occur
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	while (n-- > 0)
	{
		str = (unsigned char *) s;
		if (*str == (unsigned char) c)
			return (str);
		s++;
	}
	return (NULL);
}
