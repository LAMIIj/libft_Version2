/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:05:56 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 11:56:37 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	if (fd > 0)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

// int main()
// {
//     open ("amine.txt" ,O_WRONLY);
//     ft_putendl_fd("hi amine",3);
// }