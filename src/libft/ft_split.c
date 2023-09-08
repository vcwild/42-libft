#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**s_list;

	if (s == NULL)
		return (NULL);
	size = ft_word_count(s, c);
	s_list = malloc(sizeof(char **) * (size + 1));
	if (s_list == NULL)
		return (NULL);
	return (ft_word_split(s_list, s, c, size));
}
