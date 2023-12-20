#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h> 
// overlapping bus error 

void	*ft_memcpy(void	*dest, const	void	*src, size_t	n)
{
	unsigned	char *us;
	unsigned char	*ud;
	unsigned	char tmp[n];

	us =  (unsigned char*)src;
	ud = (unsigned char*)dest;
	size_t	i;


	i = 0;
	for ( i = 0; i < n; ++i) 
	{
		tmp[i] = us[i];
    }
	while (i < n)
	{
		ud[i] = tmp[i];
		i++;
	}
	return (dest);
}


int main() {
    char source[] = "Hello, World!";
    char destination[20] = "jiji"; // Make sure the destination has enough space

    // Using my_memcpy to copy the string from source to destination
    ft_memcpy(source, source, strlen(source) ); // +1 to include the null terminator

    // Print the result
    printf("Source: %s\n", source);
   printf("Destination: %s\n", destination);

    return 0;
}

// #include <stdio.h>
// #include <stddef.h> // for size_t

// void *my_memcpy(void *dest, const void *src, size_t n) {
//     // Cast the pointers to unsigned char pointers for byte-wise copy
//     unsigned char *ud = dest;
//     const unsigned char *us = src;

//     // Create a temporary buffer
//     unsigned char temp[n];

//     // Copy the content to the temporary buffer
//     for (size_t i = 0; i < n; ++i) {
//         temp[i] = us[i];
//     }

//     // Copy the content from the temporary buffer to the destination
//     for (size_t i = 0; i < n; ++i) {
//         ud[i] = temp[i];
//     }

//     // Return a pointer to the destination
//     return dest;
// }

// int main() {
//     char buffer[20] = "Hello, World!";

//     // Use my_memcpy to copy the content of buffer into itself
//     my_memcpy(buffer, buffer, strlen(buffer) + 1);

//     // Print the result
//     printf("Buffer: %s\n", buffer);

//     return 0;
// }
