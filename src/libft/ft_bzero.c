#include "libft.h"

/**
 * @brief Set n bytes of s to 0.
 *
 * @param s Pointer to the start of the memory location
 * @param n Buffer size
 */
void	ft_bzero(void *s, size_t n)
{
	char	*clean;

	clean = s;
	while (n != 0)
	{
		*clean++ = 0;
		n--;
	}
}
