#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest.
 *
 * @param dest	Destination pointer of memory area
 * @param src	Source pointer of memory area
 * @param n		Buffer size in bytes
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (char *) src;
	d = (char *) dest;
	while (n--)
		*d++ = *s++;
	return (dest);
}
