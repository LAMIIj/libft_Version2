/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:06:21 by lajoumad          #+#    #+#             */
/*   Updated: 2024/01/02 11:57:20 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	i;

	if (fd < 0)
		return ;
	i = (long long)n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = i * -1;
	}
	if (i <= 9)
	{
		ft_putchar_fd(i + '0', fd);
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
}
