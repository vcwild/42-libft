#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	size_t	len;
	size_t	is_c;

	len = 0;
	is_c = 1;
	while (*s)
	{
		if (*s != c && is_c)
		{
			is_c = 0;
			len++;
		}
		else if (*s++ == c)
			is_c = 1;
	}
	return (len);
}
