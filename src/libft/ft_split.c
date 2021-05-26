#include "libft.h"

/**
 * @brief Counts the string length of `s` while ignoring
 * any `c` character if found.
 *
 * @param s Pointer to the area of memory of the string
 * @param c Character to ignore
 * @return int Returns the string length except for any `c` character.
 */
static int	ft_strlen_ignore_c(char const *s, char c)
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
 * @brief Counts the number of times the character `c` is found
 * in the string `s`.
 *
 * @param s Pointer to the area of memory of the string
 * @param c Character to count occurrences in the string `s`
 * @return char const* Returns the number of occurrences of `c`
 * in the string `s`.
 */
static char const	*count_c_in_s(char const *s, char c)
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
	s = count_c_in_s(s, c);
	while (len--)
	{
		c_pos = ft_strchr(s, c);
		if (c_pos != NULL)
		{
			*s_list = ft_substr(s, idx, c_pos - s);
			s = count_c_in_s(c_pos, c);
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
	size = ft_strlen_ignore_c(s, c);
	s_list = malloc(sizeof(char **) * (size + 1));
	if (s_list == NULL)
		return (NULL);
	return (ft_word_split(s_list, s, c, size));
}
