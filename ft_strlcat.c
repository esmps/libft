/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epines-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 18:07:52 by epines-s          #+#    #+#             */
/*   Updated: 2020/03/06 20:09:36 by epines-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	while (dstsize - ft_strlen(dst) - 1 > 0 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize - i - 1 == 0)
		dst[i + j] = '\0';
	return (i + j - 1);
}
