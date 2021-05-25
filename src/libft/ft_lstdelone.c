#include "libft.h"

/**
 * @brief Takes as a parameter an element and frees the
 * memory of the element’s content using the function
 * ’del’ given as a parameter and free the element.
 * The memory of ’next’ must not be freed.
 *
 * @param lst The element to free
 * @param del The address of the function used to delete the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
