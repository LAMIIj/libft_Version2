/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:07:58 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 15:08:30 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + len));
	while (len >= 0)
	{
		if (s[len] == (char)(c))
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (NULL);
}
// last