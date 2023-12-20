#include "includes/libft.h"

// alphanumeric (upper lower // digit )
// int ft_isalnum(int c) {
//     return isalnum(c);
// }

// int main() {
//     char ch = 'D';

//     if (ft_isalnum(ch)) {
//         printf("%c is alphanumeric.\n", ch);
//     } else {
//         printf("%c is not alphanumeric.\n", ch);
//     }

//     return 0;
// }

int ft_isanum(int c)
{
    if(ft_isdigit(c) || ft_isalpha(c))
        return (1);
    else 
        return (0);
}
