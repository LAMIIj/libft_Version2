#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (fd > 0)
    {
        ft_putstr_fd(s , fd);
        ft_putchar_fd('\n',fd);
    }
}

// int main()
// {
//     open ("amine.txt" ,O_WRONLY);
//     ft_putendl_fd("hi amine",3);
// }