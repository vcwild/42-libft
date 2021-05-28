#include "libft.h"
#include "stddef.h"

typedef struct	s_node
{
	int				value;
	struct s_node	*next;
}				t_node;

t_node	*ft_create_node(int	value)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}
