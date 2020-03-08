/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epines-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:29:28 by epines-s          #+#    #+#             */
/*   Updated: 2020/03/07 14:48:14 by epines-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*temp;
	size_t	i;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (s && len > 0)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (temp)
	{
		d[i] = temp[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
