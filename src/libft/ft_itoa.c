#include "libft.h"

/**
 * @brief Get the size of memory for an integer to string conversion
 *
 * @param n Integer to be converted
 * @return int Return size of integer to string conversion
 *
 */
static size_t	ft_itoa_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0 || n == 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

/**
 * @brief Allocates (with malloc(3)) and returns a string
 * representing the integer received as an argument.
 * Negative numbers must be handled.
 *
 * @param n The integer to convert
 * @return char* Returns the string representing the integer.
 * NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = ft_itoa_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == INT_MIN)
		{
			str[len-- - 1] = '8';
			n /= 10;
		}
		n = -n;
	}
	while (n != 0 && len >= 0)
	{
		str[len-- - 1] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}
