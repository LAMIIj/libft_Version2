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
	if (c == '\0')  // handling saperate nll case 
		return &str[i];
	return (NULL);
}


//#include "libft.h"

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != (char )c)
// 	{
// 		if (s[i] == '\0')
// 			return (0);
// 		i++;
// 	}
// 	return ((char *)(s + i));
// }

// -----------------------------------------------------
// int main()
// {
// 	char	ptr[] = "hell there";
// 	char *res = ft_strchr(ptr,'o');
// 	printf("the result is : %s",res );

// }
