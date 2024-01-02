/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:03:24 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 17:32:42 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void	*b, int c, size_t	n)
{
	unsigned char	*us;
	size_t			i;

	i = 0;
	us = (unsigned char *)b;
	while (i < n)
	{
		us[i] = c;
		i++;
	}
	return (b);
}
