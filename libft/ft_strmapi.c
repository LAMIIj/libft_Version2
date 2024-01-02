/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:34:31 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 14:35:58 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;

	if (!f || !s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	while (len--)
		str[len] = f(len, s[len]);
	return (str);
}
