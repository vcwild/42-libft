#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		f(lst);
		if (lst->next)
			ft_lstiter(lst->next, f);
	}
}
