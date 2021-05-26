#include "libft.h"

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
