#include "libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’
 * to the content of each element. Creates a new list resulting
 * of the successive applications of the function ’f’.
 * The ’del’ function is used to delete the content of an element if needed.
 *
 * @param lst	The adress of a pointer to an element
 * @param f		The adress of the function used to iterate on the list
 * @param del	The adress of the function used to delete the
 * content of an element if needed
 * @return t_list* Returns the new list or NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	**new;

	if (!lst || !f)
		return (NULL);
	*new = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
		{
			if (*new != NULL)
				ft_lstclear(new, del);
			return (NULL);
		}
		ft_lstadd_back(new, tmp);
		lst = lst->next;
	}
	return (*new);
}
