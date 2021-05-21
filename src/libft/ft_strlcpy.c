#include "libft.h"

/**
 * @brief Copies up to size - 1 characters from
 * the NUL-terminated string src to dst, NUL-terminating the result.
 * 
 * @param dst	Pointer to the destination area of memory
 * @param src	Pointer to the source area of memory
 * @param size	Buffer size in bytes
 * @return size_t Returns the length of src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && (i < (size - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	if (size == 0)
		dst[ft_strlen(dst)] = '\0';
	while (src[i])
		i++;
	return (i);
}
