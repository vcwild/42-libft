#include "libft.h"

/**
 * @brief Adds the `new` element at the end of the list.
 * 
 * @param lst The address of a pointer to the first link of a list
 * @param new The address of a pointer to the element to be
 * added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
