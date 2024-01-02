/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:43:10 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 16:50:36 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const	void *s, int c, size_t	n)
{
	const unsigned char	*str;
	unsigned char		ch;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
	ch = (unsigned char)c;
	while (i < n)
	{
		while (str[i] == ch && i < n)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
