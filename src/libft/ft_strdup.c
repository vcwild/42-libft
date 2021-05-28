#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		size;

	size = ft_strlen(s1) + 1;
	cpy = (char *)malloc(size);
	if (cpy)
		ft_strlcpy(cpy, s1, size);
	return (cpy);
}
