/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:20:59 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 12:50:19 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	tab = (char *)malloc(ft_strlen(s2) + ft_strlen(s1) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		tab[i++] = s2[j++];
	tab[i] = '\0';
	return (tab);
}

// int main()
// {
// 	char	*ft = "hello";
// 	char	*ftt = "there";
// 	char	*res = ft_strjoin(ft, ftt);
// 	printf("%s", res);
// }
