#include "libft.h"
#include <stdio.h>
#include <string.h>


#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = strlen(src);
	if (!dst && !dstsize)
		return (src_len);
	dst_len = strlen(dst);
	i = 0;
	if (dst_len >= dstsize || dstsize == 0)
		return (dstsize + src_len);
	while (src[i] && i + dst_len < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}

// int main ()
// {
//     char destination[] = "Hello,";
//     char source[] ="" ;
//     size_t result = strlcat(destination, source,0);

// 	size_t res = ft_strlcat(destination, source, 0);
	

//     printf("Resulting string: %s\n", destination);
//     printf("Total length: %zu\n", result);
// 	printf("Total length: %zu\n", res);

//     return 0;
// }