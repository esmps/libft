/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epines-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 12:14:13 by epines-s          #+#    #+#             */
/*   Updated: 2020/03/06 20:17:38 by epines-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] != needle[j])
			i++;
		if (needle[j] == haystack[i])
		{
			if (needle[j + 1] != haystack[i + 1])
				j--;
			else
			{
				i++;
				j++;
			}
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i - j);
	}
	return (NULL);
}
