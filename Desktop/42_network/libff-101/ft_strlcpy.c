#include "libft.h"

// buffer overflow ensurence and returns the source lenghth 

int ft_strlcpy(char *dest, char *src,size_t destsize)
{
    size_t i;

    i = 0;
    if(destsize)
    {
        dest[i] = src[i];
        i ++;

    }
    dest[i] = '\0';
    return (ft_strlen(src)); 
}
