#include "libft.h"

/**
 * @brief Compares the two strings s1 and s2.
 * The locale is not taken into account
 *
 * @param s1 Pointer to the area of memory of the first string
 * @param s2 Pointer to the area of memory of the second string
 * @param n Buffer size in bytes to compare both strings
 * @return int Return an integer less
 * than, equal to, or greater than zero if s1 (or the first n
 * bytes thereof) is found, respectively, to be less than, to
 * match, or be greater than s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*one;
	unsigned char	*two;

	i = 0;
	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	while ((one[i] || two[i]) && i < n)
	{
		if (one[i] != two[i])
			return (one[i] - two[i]);
		i++;
	}
	return (0);
}
