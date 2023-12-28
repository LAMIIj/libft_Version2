#include "libft.h"

// overlapping bus error 
// bus cpu tansformation to memo 


void	*ft_memcpy(void	*dest, const	void	*src, size_t	n)
{
	unsigned	char *us;
	unsigned char	*ud;
	size_t	i;

	us =  (unsigned char*)src;
	ud = (unsigned char*)dest;
	if (src == dest)
		return (us);

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
//     char destination[30] = "";
//     ft_memcpy(source, source, strlen(source) + 1 );

//     // result
//     printf("Source: %s\n", source);
//    printf("Destination: %s\n", destination);

//     return 0;
// }

// int main()
// {
// 	char	*ptr = "hello";
// 	ft_memcpy(ptr,ptr,5);
// 	// memcpy(ptr,ptr,5);
// 	printf("source : %s",ptr);
// }