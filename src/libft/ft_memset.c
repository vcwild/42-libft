#include "libft.h"

/**
 * @brief fills the first n bytes of the memory
 * area pointed to by s with the constant byte c.
 *
 * @param s Pointer of memory area
 * @param c Constant byte to fill memory area
 * @param n Number of bytes to fill
 * @return void* Returns a pointer to the memory area s
 */
void	*ft_memset(void *s, int c, size_t n)
{
	char	*a;

	a = (char *) s;
	while (n--)
		*a++ = (char) c;
	return (s);
}
