#include "libft.h"

/**
 * @brief Returns the last element of the list.
 * 
 * @param lst The beginning of the list
 * @return t_list* Returns the last element of the list.
 * Returns NULL if `lst` is empty
 * or is already in the last element.
 */
t_list *ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (tmp == NULL)
		return (NULL);
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
