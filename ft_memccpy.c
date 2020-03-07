/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epines-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:16:24 by epines-s          #+#    #+#             */
/*   Updated: 2020/03/06 20:19:24 by epines-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	ch;
	char			*d;
	const char		*s;

	d = (char *)dst;
	s = (char *)src;
	ch = (unsigned char)c;
	while (s[i] != ch && s && n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	if (s[i] == ch)
		return (d + i + 1);
	else
		return (NULL);
}
