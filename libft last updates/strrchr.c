#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int n;

	n = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + n));
	while (n >= 0)
	{
		if (s[n] == (char)(c))
			return ((char *)(s + n));
		n--;
	}
	return (NULL);
}