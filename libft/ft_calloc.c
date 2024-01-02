/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:16:43 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 20:27:59 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (count != 0 && (4294967296 / count) < size)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (0);
	ft_bzero(str, count * size);
	return (str);
}
