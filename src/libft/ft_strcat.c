#include "libft.h"

/**
 * @brief Appends the src string to the
 * dest string, overwriting the terminating null byte
 * at the end of dest, and then adds a terminat‐
 * ing null byte.
 *
 * @param dest	Pointer of the destination memory area
 * @param src	Pointer to the source memory area
 * @return char* Return a pointer to the resulting string dest.
 */
char	*ft_strcat(char *dest, const char *src)
{
	ft_strcpy(&dest[ft_strlen(dest)], src);
	return (dest);
}
