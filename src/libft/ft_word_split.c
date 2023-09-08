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

/**
 * @brief Frees the memory allocated for an array of
 * strings and sets the array to NULL.
 *
 * This function takes an array of strings (`char**`)
 * and frees the memory allocated for each individual
 * string and then frees the memory allocated for the
 * array itself. Afterward, it sets the array pointer
 * to NULL to avoid any dangling pointers.
 *
 * @param s_list Pointer to the array of strings
 * to be freed.
 */
static void	free_word_list(char **s_list)
{
	char	**current;

	if (s_list == NULL)
		return ;
	current = s_list;
	while (*current != NULL)
	{
		free(*current);
		*current = NULL;
		current++;
	}
	free(s_list);
}

static char	*extract_substring(const char *s, char c, size_t *len)
{
	const char	*c_pos;
	size_t		substr_len;
	char		*substring;

	c_pos = ft_strchr(s, c);
	if (c_pos != NULL)
		substr_len = (size_t)(c_pos - s);
	else
		substr_len = ft_strlen(s);
	*len = substr_len;
	substring = ft_substr(s, 0, substr_len);
	return (substring);
}

char	**ft_word_split(
	char **s_list,
	char const *s,
	char c,
	size_t len)
{
	char	**s_list_start;
	int		idx;
	size_t	substr_len;
	char	*substring;

	s_list_start = s_list;
	idx = 0;
	while (len--)
	{
		s = skip_c_in_s(s, c);
		substring = extract_substring(s, c, &substr_len);
		if (substring == NULL)
			return (free_word_list(s_list_start), NULL);
		*s_list = substring;
		s_list++;
		s += substr_len;
		if (substr_len == 0)
			break ;
	}
	*s_list = NULL;
	return (s_list_start);
}
