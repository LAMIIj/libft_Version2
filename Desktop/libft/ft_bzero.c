// zero out a block of memo

#include <stddef.h>
#include "libft.h"

void	ft_bzero(void	*str, size_t n)
{
	size_t			i;
	unsigned	char *s;

	i = 0;
	s = str; //casting 
	while (i < n)
	{
		s[i] = '\0';
		i ++;
	}
}
