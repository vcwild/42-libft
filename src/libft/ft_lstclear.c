#include "libft.h"

/**
 * @brief Deletes and frees the given element and every
 * successor of that element, using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
 *
 * @param lst The adress of a pointer to an element
 * @param del The adress of the function used to delete
 * the content of the element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*element;

	if (*lst == NULL)
		return ;
	element = *lst;
	while (element != NULL)
	{
		tmp = element->next;
		ft_lstdelone(element, del);
		element = tmp;
	}
	*lst = NULL;
}
