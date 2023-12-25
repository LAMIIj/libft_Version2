#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if (fd < 0 )
        return ;
    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}
// int main ()
// {
//     open("amine.txt",O_WRONLY);
//     ft_putstr_fd("hello amine",3);
// }