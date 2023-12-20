#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h> 
// overlapping bus error 
// bus cpu tansformation to memo 


void	*ft_memcpy(void	*dest, const	void	*src, size_t	n)
{
	unsigned	char *us;
	unsigned char	*ud;
	size_t	i;

	us =  (unsigned char*)src;
	ud = (unsigned char*)dest;

	i = 0;
	if (!us && !ud )
		return NULL;
	while (i < n)
	{
		ud[i] = us[i];
		i++;
	}
	return (dest);
}

// int main() {
//     char source[30] = "World!";
//     char destination[30] = ""; // Make sure the destination has enough space
//     ft_memcpy(source, source, strlen(source) + 1 );

//     // result
//     printf("Source: %s\n", source);
//    printf("Destination: %s\n", destination);

//     return 0;
// }