/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epines-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:49:51 by epines-s          #+#    #+#             */
/*   Updated: 2020/03/07 17:05:40 by epines-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

int	ft_atoi(const char *str)
{
	int i;
	int	res;
	int	s;

	i = 0;
	res = 0;
	s = 1;
	if (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	else if (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i]);
		i++;
	}
	return (res * s);
}
