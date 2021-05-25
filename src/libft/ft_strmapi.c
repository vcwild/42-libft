#include "libft.h"

/**
 * @brief Applies the function ’f’ to each character of the string ’s’
 * to create a new string (with malloc(3)) resulting from successive
 * applications of ’f’.
 *
 * @param s The string on which to iterate
 * @param f The function to apply to each characte
 * @return char* The string created from the successive applications of ’f’.
 * Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL || !s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
