#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const	char	*str1, const	char*str2, size_t	n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return 0;
	while(str1[i] && str2[i] && str1[i] == str2[i] && i + 1 < n)
		i ++;
	return ((unsigned	char)str1[i] - (unsigned	char)str2[i]);
}



// int main() {
//     const char *str1 = "Hello, World!";
//     const char *str2 = "Hello, Everyone!";
//     size_t n = 8;  // Number of characters to compare

//     int result = strncmp(str1, str2, n);
// 	int a = ft_strncmp(str1,str2,n);
	

//     if (a == 0) {
//         printf("The first %zu characters of the strings are equal.\n", n);
//     } else if (a < 0) {
//         printf("The first  %zu characters of str1 are lexicographically less than str2.\n", n);
//     } else {
//         printf("The first  %zu characters of str1 are lexicographically greater than str2.\n", n);
//     }

//     return 0;
// }
