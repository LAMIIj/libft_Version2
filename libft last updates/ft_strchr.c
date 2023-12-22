#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const	char	*str, int	c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned	char)c)
			return ((char *)&str[i]);
		
		i ++;
	}
	return (NULL);
}

// int main()
// {
// 	char	ptr[] = "hell there";
// 	char *res = ft_strchr(ptr,'o');
// 	printf("the result is : %s",res );

// }
