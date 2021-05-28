#include "libft.h"

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
