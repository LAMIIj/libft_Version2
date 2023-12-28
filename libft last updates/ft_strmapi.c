# include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char	const	*s, char	(*f)(unsigned int,char))
{
	size_t	len;
	unsigned int i;
	char		*str;

	i = 0;
	if (!s || !s)
		return NULL;
	len = ft_strlen(s) ;
	str = (char *)malloc(len + 1);
	if (!str)
		return 0;

	while (str[i])
	{
		str[i] = f(i,str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
