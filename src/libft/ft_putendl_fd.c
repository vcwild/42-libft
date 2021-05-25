#include "libft.h"

/**
 * @brief Outputs the string ’s’ to the given filedescriptor,
 * followed by a newline.
 * 
 * @param s The string to output
 * @param fd The file descriptor on which to write
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
