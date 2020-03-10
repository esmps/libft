/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epines-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 16:03:57 by epines-s          #+#    #+#             */
/*   Updated: 2020/03/09 16:48:49 by epines-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		l1;
	int		l2;

	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	str = (char *)malloc(l1 + l2 + 1);
	if (!s1 && !s2)
		return (NULL);
	if (!str)
	{
		free(str);
		return (NULL);
	}
	while (s1[i])
	{
		str[i] = (char)s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[l1 + i] = s2[i];
		i++;
	}
	str[l1 + i] = '\0';
	return (str);
}
