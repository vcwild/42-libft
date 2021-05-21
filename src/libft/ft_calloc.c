#include "libft.h"

/**
 * @brief Allocates memory for an array
 * of nmemb elements of size bytes each and returns
 * a pointer to the allocated memory. The memory
 * is set to zero.
 * 
 * @param nmemb	Number of elements in array
 * @param size	Size of bytes for each element
 * @return void* Return a pointer to the
 * allocated memory, which is suitably aligned for any built-in
 * type. On error, these functions return NULL. NULL may also
 * be returned by a successful call but with size 0.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*pos;
	size_t	tot_size;
	int		fill_byte;

	tot_size = nmemb * size;
	fill_byte = 0;
	pos = malloc(tot_size);
	if (!pos || (tot_size > INT_MAX))
		return (NULL);
	ft_memset(pos, fill_byte, tot_size);
	return ((void *)pos);
}
