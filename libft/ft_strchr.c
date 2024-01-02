/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:28:11 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 16:17:19 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != (char )c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)(str + i));
}
// 27 handling saperate nll case 