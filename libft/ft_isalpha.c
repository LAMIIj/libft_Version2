/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajoumad <lajoumad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:23:02 by lajoumad          #+#    #+#             */
/*   Updated: 2023/12/28 21:23:40 by lajoumad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int main()
// {
// 	char *str="hi amine";
// 	while(*str)
// 	{
// 		if(!ft_isalpha(*str))
// 		{	printf("ko");
// 			return 1;
// 		}
// 		str++;
// 	}
// 	printf("ok");
// 	return 0;
// }