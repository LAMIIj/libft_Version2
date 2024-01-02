/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:38:30 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 14:41:42 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *str1, const char*str2, size_t	n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] && str2[i] && str1[i] == str2[i] && i + 1 < n)
		i ++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
