#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"


void	*ft_memchr(const	void	*s,int	c, size_t n);

int main() {
    const char *str = "Hello, World!";
    char search_char = 'o';

    // Using memchr to find the first occurrence of 'W' in str
    const char *result = memchr(str, search_char, strlen(str));
	const char *Myresult = ft_memchr(str, search_char, strlen(str));

  if (result != NULL) {
        printf("'%c' found at position %ld\n", search_char, result - str);
    } else {
        printf("'%c' not found in the string.\n", search_char);
    }

    if (Myresult != NULL) {
        printf("'%c' found at position %ld\n", search_char, Myresult - str);
    } else {
        printf("'%c' not found in the string.\n", search_char);
    }

    return 0;
}

// find the position 

void	*ft_memchr(const	void	*s,int	c, size_t n) 
//  const no touche up in s memo so we gotta cast 
{
	const	unsigned	char *str;
	size_t i ;
	unsigned	char ch;

	// str = NULL;
	str = s;
	i = 0;
	ch = (unsigned char)c;

	while (str && i < n)
	{
		while (str[i] == ch && i < n)
			return (void *)(str + i);
		i ++;
	}
	return (NULL);
}
