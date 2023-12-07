#include <stdio.h>

int ft_isdigit(int a)
{
    if(a >= '0' && a <= '9')
        return (1);
    else 
        return (0);
}
int    ft_str_isdigit(char *c)
{
    int count;

    count = 0;
    while (c[count])
    {
        if((!ft_isdigit(c[count]) ) && c[count] != ' ') 
            return (0);
        count ++;
    }
    return (1);
}


// int main ()
// {
   
//     char c[] = "1ello";

//     ft_str_isdigit(c);
//     if(ft_str_isdigit(c) == 0)
//         printf("done");
// }
