#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	if (n == 0)
		return ((int)n);
	while (*one++ == *two++ & n-- > 0)
	{
		if (*one != *two)
			return ((int)(*one - *two));
		if (n == 0)
			return ((int)n);
	}
	return (0);
}
