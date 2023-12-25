#include "libft.h"

static char		*ft_strcpy(char	*dst, const	char *src)
{
	int i;
	i = -1;

	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(char *s1)
{
	char *ptr;
	size_t		len;

	len = ft_strlen(s1);
	ptr = (char	*)malloc(len + 1);
	if (!ptr)
		return NULL;
	ft_strcpy(s1, ptr);
	return (ptr);
}
