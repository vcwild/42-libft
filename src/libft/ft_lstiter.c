#include "libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function
 * ’f’ to the content of each element.
 *
 * @param lst The adress of a pointer to an element
 * @param f The adress of the function used to iterate on the list
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		f(lst);
		if (lst->next)
			ft_lstiter(lst->next, f);
	}
}
