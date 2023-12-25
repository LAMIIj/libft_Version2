#include "libft.h"

static int ft_strcmp(unsigned char *s1, unsigned char *s2)
{
	while(*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	i = 0;
	d = dst;
	s =(unsigned char*)src;
	if(!ft_strcmp(d,s))
		return s;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
