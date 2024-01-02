/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:18:04 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 12:20:03 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcpy(char	*dst, const	char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s1);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	ptr = ft_strcpy(ptr, (char *)s1);
	return (ptr);
}
