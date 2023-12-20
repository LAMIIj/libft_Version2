#include <unistd.h>

void    ft_putstr(char  *c)
{
    int i ;
    i = 0;
    while (c[i])
    {
        write (1,&c[i],1);
        i++;
    }
}

int ft_stlen(char   *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        i++;
    }
    return (i);
}


int main(int ac, char   *av[])
{
    int i;
    int j;
    int count;


    i = 0;
    j = 0;
    count = 0;

    if (ac == 3)
    {
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    count++;
                    break;
                }
                j++;
            }
            i ++; 
        }
        if (count == ft_stlen(av[1]))
                ft_putstr(av[1]);
    }
    write (1,"\n",1);
    return 0;
}