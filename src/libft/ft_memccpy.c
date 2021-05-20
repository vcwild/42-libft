#include "libft.h"

/**
 * @brief Copies no more than n bytes
 * from memory area src to memory area dest, stopping
 * when the character c is found.
 *
 * @param dest Destination pointer of memory area
 * @param src Source pointer of memory area
 * @param c Character to be searched
 * @param n Buffer size
 * @return void* Returns pointer to the next character in dest after c,
 * or NULL if c was not found in the first n characters of src.
 */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (n-- > 0)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return ((void *)d + 1);
		s++;
		d++;
	}
	return (NULL);
}
