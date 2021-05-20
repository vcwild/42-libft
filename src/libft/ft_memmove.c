#include "libft.h"

/**
 * @brief Copies n bytes from memory
 * area src to memory area dest.
 *
 * @param dest	Destination pointer of memory area
 * @param src	Source pointer of memory area
 * @param n		Buffer size in bytes
 * @return void* Returns a pointer to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
		return (dest);
	}
	ft_memcpy(d, s, n);
	return (dest);
}
