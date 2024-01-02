/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:48:44 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 16:47:59 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dsst;
	char	*srcc;

	srcc = (char *)src;
	dsst = (char *)dst;
	if (srcc == NULL && dsst == NULL)
		return (0);
	if (dsst > srcc)
	{
		while (n > 0)
		{
			dsst [n - 1] = srcc[n - 1];
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*dsst++ = *srcc++;
			n--;
		}
	}
	return (dst);
}
