#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}

// int main()
// {
// 	char i ;
// 	i = 'A';

//     printf("is %d ", ft_isdigit(i));
// }