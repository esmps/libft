#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst)
	{
		while (*lst)
		{
			if (del)
				ft_lstdelone(*lst, del);
			*lst = (*lst)->next;
		}
	}
	*lst = NULL;
}
