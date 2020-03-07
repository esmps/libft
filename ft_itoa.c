/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epines-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:02:45 by epines-s          #+#    #+#             */
/*   Updated: 2020/02/19 17:03:17 by epines-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int num)
{
	int	i;

	i = 1;
	while (num /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	size_t	len;
	int		x;
	char	*s;
	char	*res;

	len = int_len(n);
	s = (char *)malloc(sizeof(char) * ((n < 0) + len + 1));
	res = s;
	if (!s)
		return (NULL);
	ft_memset(s, '0', (sizeof(char) * ((n < 0) + len + 1)));
	s[(n < 0) + len] = '\0';
	x = ft_pow(10, len - 1);
	if (n == 0)
		s++;
	if (n < 0)
		*s++ = '-';
	while (n)
	{
		*s++ = ft_abs(n / x) + '0';
		n = n % x;
		x = x / 10;
	}
	return (res);
}
