#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*a;

	a = (char *) s;
	while (n--)
		*a++ = (char) c;
	return (s);
}
