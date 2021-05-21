#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t'
		|| c == '\v'
		|| c == '\r'
		|| c == '\n'
		|| c =='\f')
		return (1);
	return (0);
}

/**
 * @brief converts the initial portion of the string pointed to by nptr to int.
 * 
 * @param nptr Pointer to the area of memory of the string to be converted
 * @return int The converted value or 0 on error
 */
int	ft_atoi(const char *nptr)
{
	int	res;
	int	is_neg;

	is_neg = 0;
	res = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		is_neg = 1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
		res = (res * 10) + (*nptr++ - 48);
	if (is_neg)
		return (res * -1);
	return (res);
}
