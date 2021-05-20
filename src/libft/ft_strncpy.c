#include "libft.h"


/**
 * @brief Copies the string pointed to by
 * src to dest for n bytes.
 *
 * @param dest	Pointer to the destination memory area
 * @param src	Pointer to the source memory area
 * @param n		Buffer size in bytes
 * @return char* Return a pointer to the destination string dest.
 */
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*pos;

	pos = dest;
	while (*src && n-- > 0)
	{
		*dest++ = *src++;
	}
	while (n-- > 0)
	{
		*dest++ = 0;
	}
	return (pos);
}
