#include <unistd.h>
void    ft_putstr(char  c)
{ 
        write (1,&c,1);
}
void    ft_putnbr(int nb)
{
    unsigned    int i;
    i = nb;

    if (nb < 0)
    {
        write (1,"-",1);
        ft_putnbr(-nb);
    }
    if (i <= 9 && i >= 0)
    {
        i += '0';
        ft_putstr(i);
    }
    else
    {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }

}

int main()
{
    ft_putnbr68077);
}