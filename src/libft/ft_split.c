#include "libft.h"

/**
 * @brief Counts the number of words in `s`
 * by using the character `c` as word delimiter.
 *
 * @param s Pointer to the area of memory of the string
 * @param c Word delimiter
 * @return int Returns the number of words in string `s`.
 */
static int	word_count(char const *s, char c)
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

/**
 * @brief Splits the words into a list of strings by using
 * the `c` delimiter.
 *
 * @param s_list Pointer to receive the list of strings
 * @param s String containing the list of words
 * @param c Character to split the words
 * @param len Size of the `s_list`
 * @return char** Returns a NULL-terminated list of words
 * separated by the character `c`.
 */
static char	**ft_word_split(char **s_list, char const *s, char c, size_t len)
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

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**s_list;

	if (s == NULL)
		return (NULL);
	size = word_count(s, c);
	s_list = malloc(sizeof(char **) * (size + 1));
	if (s_list == NULL)
		return (NULL);
	return (ft_word_split(s_list, s, c, size));
}
