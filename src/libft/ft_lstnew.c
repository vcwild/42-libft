#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new element.
 * The variable ’content’ is initialized with the value of the
 * parameter ’content’. The variable ’next’ is initialized to NULL.
 * 
 * @param content The content to create the new element with
 * @return t_list* The new element
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
