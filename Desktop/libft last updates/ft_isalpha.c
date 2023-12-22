#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'));
}

// int main()
// {
// 	char *str="hi amine";
// 	while(*str)
// 	{
// 		if(!ft_isalpha(*str))
// 		{	printf("ko");
// 			return 1;
// 		}
// 		str++;
// 	}
// 	printf("ok");
// 	return 0;
// }