#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + len));
	while (len >= 0)
	{
		if (s[len] == (char)(c))
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (NULL);
}
