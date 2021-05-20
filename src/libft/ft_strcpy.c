#include "libft.h"

/**
 * @brief copies the string pointed to by
 * src, including the terminating null byte to
 * the buffer pointed to by dest.
 *
 * @param dest	Pointer to the destination memory area
 * @param src	Pointer to the source memory area
 * @return char* Return a pointer to the destination string dest.
 */
char	*ft_strcpy(char *dest, const char *src)
{
	char	*pos;

	pos = dest;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (pos);
}
