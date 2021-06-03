#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) != 0 || ft_isdigit(c) != 0);
}
