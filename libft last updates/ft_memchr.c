#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"


void *ft_memchr(const void *s, int c, size_t n)
{
    const	unsigned	char *str;
	size_t      i ;
	unsigned	char ch;


	str = s;
	i = 0;
	ch = (unsigned char)c;
	while (str && i < n)
	{
		while (str[i] == ch && i < n)
			return (void *)(str + i);
		i++;
	}
	if (c == '\0')
		return (void *)(&str[i]);
	return (NULL);
}
