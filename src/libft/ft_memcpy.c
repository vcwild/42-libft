#include "libft.h"

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
