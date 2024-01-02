/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:57:29 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 21:06:17 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const	char *str)
{
	long	res;
	short	sign;
	long	tmp;
	int		i;

	i = 0;
	res = 0;
	while (str && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	sign = 1 - (str[i] == '-') * 2;
	i += (str[i] == '+' || str[i] == '-');
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		tmp = res;
		res = res * 10 + str[i++] - '0';
		if (res < tmp)
		{
			if (sign == -1)
				return (0);
			if (sign == 1)
				return (-1);
		}
	}
	return (sign * (int)res);
}
