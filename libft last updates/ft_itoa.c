#include "libft.h"
#include <stdio.h>
int count_digit(int n)
{
    int c;
    
    c = 0;
    if(n < 0)
    {   n *= -1;
        c++;
    }
    if (n >= 0 && n <= 9)
    {
        c++;
        return c;
    }
    while (n >= 10)
    {
        n = n / 10;
        c++;
    }
    return c + 1;
}
char    *ft_itoa(int n)
{
    char *str;
    int ind =0;
    int c = 0;
    
    c = count_digit(n);
    str = malloc(sizeof(char)*(c + 1));
    if (!str)
        return (0);
    if (n < 0)
    {
        ind = 1;
        n *= -1;
    }
    str[c] = '\0';
    while (--c >= 0)
    {
        str[c] = n % 10 + '0';
        n /= 10;
    }
    if (ind == 1)
        str[0] ='-';
    return (str);
}      

// int main ()
// {
//     printf("%s",ft_itoa(134556));
//     printf("%s",itoa(134556));
// }