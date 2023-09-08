#include "libft.h"

/**
 * @brief If the string `s` starts with `c`, then the
 * function returns the next pointer to `s` that is not
 * equal to `c`.
 *
 * @param s Pointer to the area of memory of the string
 * @param c Character to skip occurrences in the string `s`
 * @return char const* Returns `s` when the next character
 * is not `c`. If every occurrence of `s` is equal to `c`,
 * then returns the NULL-terminated byte.
 */
static char const	*skip_c_in_s(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

char	**ft_word_split(char **s_list, char const *s, char c, size_t len)
{
	char	*c_pos;
	int		idx;
	char	**s_list_start;

	s_list_start = s_list;
	idx = 0;
	s = skip_c_in_s(s, c);
	while (len--)
	{
		c_pos = ft_strchr(s, c);
		if (c_pos != NULL)
		{
			*s_list = ft_substr(s, idx, c_pos - s);
			s = skip_c_in_s(c_pos, c);
		}
		else
			*s_list = ft_substr(s, idx, ft_strlen(s) + 1);
		s_list++;
	}
	*s_list = NULL;
	return (s_list_start);
}
