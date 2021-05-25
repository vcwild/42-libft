#include "libft.h"

/**
 * @brief Outputs the string ’s’ to the given filedescriptor.
 *
 * @param s The string to output
 * @param fd The file descriptor on which to write
 */
void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
	{
		while (*s)
			write(fd, s++, 1);
	}
}
