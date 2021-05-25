#include "libft.h"

/**
 * @brief Outputs the character ’c’ to the given filedescriptor.
 *
 * @param c The character to output
 * @param fd The file descriptor on which to write
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
