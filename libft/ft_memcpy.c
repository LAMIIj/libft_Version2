/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:42:21 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 19:36:02 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	unsigned char	*us;
	unsigned char	*ud;
	size_t			i;

	us = (unsigned char *)src;
	ud = (unsigned char *)dst;
	if (src == dst)
		return (us);
	i = 0;
	if (!us && !ud)
		return (NULL);
	while (i < n)
	{
		ud[i] = us[i];
		i++;
	}
	return (dst);
}
