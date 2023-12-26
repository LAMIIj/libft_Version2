#include "libft.h"
#include <stdio.h>

static char	*ft_strcat(char	*s1, char	*s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while ( s2[j])
	{
		s1[i] = s2[j]; 
		j++;
		i++;
		
	}
return (s1);
}

char	*ft_strjoin(char	const	*s1, char	const	*s2)
{
	char	*str;
	int i;
	char	*s11;
	char	*s22;
	s11= (char	*)s1;
	s22 = (char	*)s2;

	str = (char *)malloc(ft_strlen(s11) + ft_strlen(s22) + 1);

	if (str == (void	*)0)
		return (NULL);
	printf("hello\n");
	str = ft_strcat(s11,s22);
	printf("%s \n", str);
	return (str);
}


// int main()
// {
// 		char s1[80] = "hello";
// 	char s2[] = ", There!";

// 	printf("the join is %s",ft_strjoin(s1,s2));

// }