/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:17:29 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 20:48:24 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	long long	i;
	long long	j;
	int			size;

	j =0;
	if (!s1 || !set)
		return (0);
	if (!(*s1))
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	size = j - i + 1;
	return (ft_substr(s1, i, size));
}
// first po 28
// last po 30