#include "libft.h"

char	*ft_strnstr(const	char	*str, const	char	*word,	size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str == '\0' && len == 0)
		return (NULL);
	if (!*word)
		return ((char	*)str);
	while (i <= len)


}