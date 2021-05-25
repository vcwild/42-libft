#include "libft.h"

/**
 * @brief Counts the number of elements in a list.
 *
 * @param lst The beginning of a list
 * @return int Returns the length of a list
 */
int	ft_lstsize(t_list *lst)
{
	size_t	len;
	t_list	*tmp;

	len = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = lst->next;
		len++;
	}
	return (len);
}
