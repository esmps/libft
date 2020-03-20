/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epines-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 13:02:26 by epines-s          #+#    #+#             */
/*   Updated: 2020/03/20 13:02:29 by epines-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
