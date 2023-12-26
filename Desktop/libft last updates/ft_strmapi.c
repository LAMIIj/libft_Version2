// applie on each desired 
# include "libft.h"
#include <stdio.h>

// check the input string NULL
// the lengh
// 
// applying fonction and addingn results 


char	*ft_strmapi(char	const	*s, char	(*f)(unsigned int,char))
{
	size_t	len;
	unsigned int i;
	char		*str;

	i = 0;
	if (!s)
		return NULL;
	len = ft_strlen(s) ;
	str = malloc(len + 1);
	if (str == NULL)
		return NULL;

	while (str[i])
	{
		str[i] = f(i,str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}


char uppercase_mapping(unsigned int index, char c) 
	{
    return (c >= 'a' && c <= 'z') ? c - 'a' + 'A' : c;
	}


// int main()
// {
// 	const char *original = "Hello, World!";
// 	char *modified = ft_strmapi(original, uppercase_mapping);

//     printf("Original: %s\n", original);
//     printf("Modified: %s\n", modified);
// }