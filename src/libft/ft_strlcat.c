#include "libft.h"

/**
 * @brief Appends the NUL-terminated
 * string src to the end of dst.  It will append at most
 * size - strlen(dst) - 1 bytes, NUL-terminating the result.
 *
 * @param dest	Pointer to the destination area of memory
 * @param src	Pointer to the source area of memory
 * @param size	Buffer size in bytes
 * @return size_t Return the total length of the string,
 * that is the initial length of dst plus the length of src.
 */
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dest[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && (len + 1) < size)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < size)
		dest[len] = '\0';
	return (i + ft_strlen(src));
}
