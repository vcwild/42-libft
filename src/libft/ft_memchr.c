#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	while (n-- > 0)
	{
		str = (unsigned char *) s;
		if (*str == (unsigned char) c)
			return (str);
		s++;
	}
	return (NULL);
}
