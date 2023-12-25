#include "stdlib.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void	*s, int	c, size_t	n)
{
	unsigned char *us;
	size_t	i;

	i = 0;
	us = (unsigned char *)s;

	while (i < n)
	{
		us [i] = c;
		i ++;
	}
	return (s);
}


// int main()
// {
// 	char	*ptr = "hello";
// 	memset(ptr,'B',5);
// 	// ft_memset(ptr,'B',5);
	
// 	printf("its : %s",ptr);
// }
