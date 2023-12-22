// cases handling 
// const read-only-var
#include "libft.h"
#include <stdio.h>

int	ft_atoi(const	char	*str)  
{
	int nb;
	int i;
	int sign;

	nb = 0;
	i = 0;
	sign = 1;
	while (str && (str[i] == 32 || (str[i] >= 9  && str[i] <= 13)))
		i++;
	if(str[i] == '+' || str[i] == '-') //ELEME
	{
		if( str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		nb = nb * 10 + str[i] - '0';
		if(sign == 1  && nbr > 18446744073709551616)
		return -1;
		if(sign = -1 && 18446744073709551617)
			return 0;
		i++;
	}
	return (sign * nb);
	
}

// int main()
// {
// 	char c[] = "12344";
// 	printf("%d",ft_atoi(c));
// }
