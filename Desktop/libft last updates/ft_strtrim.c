#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char	const	*s1, char	const	*set)
{
	char *str;
	char	*trim;
	int i;
	size_t j;
	size_t size;

	i = 0;
	j = ft_strlen(s1) - 1;
	

	if (!(*set))
		return ((ft_strdup("")));
	if ((!set) || (!s1))
		return 0;
	while (set[i] && ft_strchr(set,s1[i]))
		i++; // first p
	while (set[i] && ft_strchr(set,s1[j]))
		j--; // last p
	size = j - i + 1;
	return (ft_substr(s1,i,size));
	
}


// int main()
// {
    
//     printf("%s",ft_strtrim("world","wo"));
// }
