#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while ((*s1) && (ft_strchr(set, *s1)))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	size = len + 1;
	return (ft_substr(s1, 0, size));
}
