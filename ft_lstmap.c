#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f)
		return NULL;
	new = ft_lstnew((*f)(lst));
	temp = new;
	while (lst)
	{
		temp->next = ft_lstnew((*f)(lst));
		if (del)
			(*del)(lst->content);
		temp = temp->next;
		lst = lst->next;
	}
	return (new);
}
