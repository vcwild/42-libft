#include "libft.h"

static int	isspace(char c)
{
	if (c == '\t'
		|| c == '\v'
		|| c == '\r'
		|| c == '\n'
		|| c =='\f')
		return (1);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	int	res;
	int	is_neg;

	is_neg = 0;
	res = 0;
	while (isspace(*nptr))
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
		return(res * -1);
	return (res);
}
