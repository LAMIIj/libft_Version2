#include <stdio.h>
int	ft_atoi(const char *str)
{
    int i;
    int count;
    int result ;
    count = 1;
    result = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] == '+' || str[i] == '-')
        {
            if(str[i] == '-')
                count *= -1;
            i++;
        }
        while (str[i] && str[i]>= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
            i++;
        }
        i++;
    }
    return (count * result);
}

int main ()
{
    char str [] = "--+-5--54";
    ft_atoi(str); 
    printf("%d",ft_atoi(str));
}