/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:39:41 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 16:58:04 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	const unsigned char	*ss;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	s = s1;
	ss = s2;
	if (s == NULL && ss == NULL)
		return (0);
	while (i < n)
	{
		if (s[i] != ss[i])
			return (s[i] - ss[i]);
		i++;
	}
	return (0);
}
