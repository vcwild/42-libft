#include "libft.h"

/**
 * @brief Calculates the length of a string while
 * ignoring the `c` character. similar to strlen().
 *
 * @param str String to be analysed
 * @param c Ignored character
 * @return int Returns string length.
 */
static int	ft_strlen_ignore_char(const char *str, char c)
{
	int	len;
	int	is_c;

	len = 0;
	is_c = 0;
	while (*str)
	{
		if (*str != c && is_c == 0)
		{
			is_c = 1;
			len++;
		}
		else if (*str == c)
			is_c = 0;
		str++;
	}
	return (len);
}

/**
 * @brief Copies a string `str` from `start` to `end`
 *
 * @param str Pointer to the string to be copied
 * @param start Start index
 * @param end Final position to be copied
 * @return char* Returns a cutted out string
 */
static char	*ft_strcut(const char *str, int start, int end)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc((end - start) * sizeof(char));
	while (start < end)
		s[i++] = str[start++];
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		idx;
	char	**str;

	i = 0;
	j = 0;
	idx = -1;
	str = malloc((ft_strlen_ignore_char(s, c) + 1) * sizeof(char *));
	if (str == NULL || !s)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && idx < 0)
			idx = i;
		else if ((s[i] == c || i == ft_strlen(s)) && idx >= 0)
		{
			str[j++] = ft_strcut(s, idx, i);
			idx = -1;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}
