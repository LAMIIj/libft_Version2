#include "libft.h"

char	*ft_strnstr(const char *str, const char *char, size_t len)
{
	size_t	i;
	size_t	j;

	if (!str && !len)
		return (NULL);
	i = 0;
	if (!char[0])
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && char[j]
			&& str[i + j] == char[j] && i + j < len)
			j++;
		if (!char[j])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

