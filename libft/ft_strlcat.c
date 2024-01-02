/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:28:47 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 13:30:46 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char	*dst, char	*src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	size_t			dst_len;
	size_t			src_len;

	src_len = ft_strlen(src);
	if (!dst && !dstsize)
		return (src_len);
	dst_len = 0;
	i = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	if (dstsize == 0)
		return (src_len);
	j = dst_len;
	if (dstsize > j && dstsize)
	{
		while (src[i] && j < dstsize - 1)
		{
			dst[j] = src[i++];
			j++;
		}
		dst[j] = '\0';
	}
	return (dst_len + src_len);
}
