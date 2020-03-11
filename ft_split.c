/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epines-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:36:13 by epines-s          #+#    #+#             */
/*   Updated: 2020/03/11 12:21:54 by epines-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		x;
	int		i;

	i = 0;
	x = 1;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			if (s[i] != c && s[i] != '\0')
				x++;
		}
		i++;
	}
	return (x);
}

static int	count_word_len(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (s)
	{
		while (s[i] != c && s[i] != '\0')
		{
			j++;
			i++;
		}
	}
	return (j);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**arr;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * count_words(s, c))))
		return (NULL);
	while (i < count_words(s, c) - 1)
	{
		j = 0;
		while (s[k] == c)
			k++;
		if (!(arr[i] = (char *)malloc(sizeof(char) * count_word_len(s, c))))
			return (NULL);
		while (s[k] != c)
			arr[i][j++] = s[k++];
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
