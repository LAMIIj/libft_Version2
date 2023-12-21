#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char	*dest, char	*src,	size_t	size)
{
	size_t	dest_l = ft_strlen(dest);
	size_t	src_l = ft_strlen(src);
	size_t	total_l = src_l + dest_l;
	size_t	copied_l = size >  dest_l ? size - dest_l - 1 : 0; // size we wanna take - dest since the issue in it - null term
	size_t						i;

	i = 0;
	if (!size && !src_l)
		return (src_l);
	if (size <= dest_l) {
        return (size + src_l ); // Not enough space to concatenate,
    }
	while (src[i] && i < copied_l) //  loop to 
	{
		dest [dest_l + i] = src[i];
		i ++;
	}
	dest[i + dest_l] = '\0';
	return(total_l);
}

// #include "libft.h"

// size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	dst_len;
// 	size_t	src_len;

// 	src_len = strlen(src);
// 	if (!dst && !dstsize)
// 		return (src_len);
// 	dst_len = strlen(dst);
// 	i = 0;
// 	if (dst_len >= dstsize)
// 		return (dstsize + src_len);
// 	while (src[i] && i + dst_len < dstsize - 1)
// 	{
// 		dst[dst_len + i] = src[i];
// 		i++;
// 	}
// 	dst[i + dst_len] = '\0';
// 	return (dst_len + src_len);
// }

int main ()
{
    char destination[] = "Hello,";
    char source[] ="" ;
    size_t result = strlcat(destination, source,0);

	size_t res = ft_strlcat(destination, source, 0);
	

    printf("Resulting string: %s\n", destination);
    printf("Total length: %zu\n", result);
	printf("Total length: %zu\n", res);

    return 0;
}