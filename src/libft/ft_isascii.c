#include "libft.h"

/**
 * @brief Verify if the character typed is from the ASCII table.
 *
 * @param c Character to be analysed
 * @return int Retuns 1 if character is found, and 0 if not found.
 */
int	ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return (1);
	return (0);
}
