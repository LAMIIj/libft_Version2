#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_substr(const    char    *s, unsigned int start, size_t  len)
{
    char    *sub;
    size_t  s_len;
    size_t  sub_len;
    size_t  i;


    i = 0;
    s_len = ft_strlen(s);
    if (!s || (start >= s_len))
        return NULL;
    sub_len = s_len - start;

    if (len > sub_len)
        len = sub_len;
    sub = (char *)malloc(sub_len + 1);

    if (sub == NULL)
        return 0;
    while (i < len)
    {
        sub[i] = s[i + start];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}
