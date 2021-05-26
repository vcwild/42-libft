#include "libft.h"

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
