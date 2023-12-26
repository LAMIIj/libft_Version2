#include "libft.h"

 char *ft_strdup(const char *s1)
{
	int i;

	i = 0;
	char	*s2;

	s2 = malloc(ft_strlen(s1) + 1);	
	while (!s2)
		return NULL;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
