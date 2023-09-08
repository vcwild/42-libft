#include "libft.h"

/**
 * @brief Converts the integer `num` into the string `str`.
 *
 * @param str Pointer to the string to allocate `num`
 * @param size Buffer size to allocate the string
 * @param num Integer to be converted to string
 * @param is_negative If `num` is negative
 * @return char* Returns the integer `num` as a string with
 * NULL-terminated byte.
 */
static char	*convert_itoa(
	char *str,
	size_t size,
	unsigned int num,
	unsigned int is_negative)
{
	str[size] = '\0';
	while (size--)
	{
		str[size] = (num % 10) + 48;
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t			n_digits;
	unsigned int	is_negative;
	char			*str;

	n_digits = ft_numlen(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	str = malloc(sizeof(char) * (n_digits + 1));
	if (str == NULL)
		return (NULL);
	return (convert_itoa(str, n_digits, (unsigned int)n, is_negative));
}
