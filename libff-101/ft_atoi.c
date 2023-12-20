#include  <stdlib.h>
#include <limits.h>
#include <stdio.h>
int length(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i ++;
    }
    return (i);
}

int ft_atoi(char *str)
{
    int nb;
    int sign;
    int i;
    int results;

    i = 0;
    sign = 1;
    nb = 0;
    // lenght / digits / empty 
    while (str[i]) 
    {
       while  (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
            {
                i ++;   /* code */
            }
        if (str[i] == '+' || str[i] == '-')
        {
                if (str[i] == '-')
                    sign = - sign ;
                i ++;
        }
        while (str[i] >= '0'  && str[i] <= '9')
        {
                nb = nb * 10 + str[i] - '0';
                i ++;
        }
        results = nb * sign;
        if (results > INT_MAX)
            return (-1);
        return (results);
        i++;
   }
   return (0);
}

int main ()
{
printf("%d \n", ft_atoi("214748362785555555555"));
printf("%d \n", atoi("2147483648"));}