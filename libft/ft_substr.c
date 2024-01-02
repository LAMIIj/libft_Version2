/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:20:48 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 20:27:30 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(const char *s, unsigned int start, size_t	len)
{
	char			*sub;
	size_t			sub_len;
	size_t			s_len;
	size_t			i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	sub_len = s_len - start;
	if (len > sub_len)
		len = sub_len;
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (0);
	while (i < len && i < s_len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
int main()
{
	printf("%s", ft_substr(0,0,0));
}