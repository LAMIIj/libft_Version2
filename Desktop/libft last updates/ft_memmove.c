#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
void *second_memmove(void	*desr, const	void	*src, size_t	n);
void	*ft_memmove(void *dst, const void *src, size_t len);

// void	*ft_memmove(void	*dest, const	void	*src, size_t	n)
// {
// 	 unsigned	char	*ud;
// 	const unsigned	char	*us;
// 	char				*temp;
// 	size_t				i;

// 	if (!dest && !src)
// 		return (NULL);

// 	i = 0;
// 	us = (const unsigned	char*)src;
// 	ud = (unsigned	char*)dest; // casting helps data alignement properly copying memo byte by byte 

// 	temp = (char	*)malloc(n);
// 	while (i < n)
// 	{
// 		temp[i] = us[i];
// 		i ++;
// 	}
// 	 i = 0;
//     while (i < n) {
//         ud[i] = temp[i];
//         i++;
//     }

// 	free (temp);

// 	return (dest);

// }


// int main()
// {
// 	char	*src = "hello there";
// 	char	dest[20];

// 	// Copy the first 7 characters from source to destination
//     ft_memmove(src, src, 12);

//     // Print the result
//     printf("Copied string: %s.\n", dest);

// }



void *second_memmove(void	*desr, const	void	*src, size_t	n)
{
	const	unsigned	char *us;
	unsigned	char *ud;
	size_t	i;

	us = (unsigned	char*)src;
	ud = (unsigned	char*)desr;
	i = 0;

	if (us > ud)
	{
		i ++;
		while (i > n)
		{
			ud[i] = us[i];
			i --;
		}
	}
	else 
		while (i < n)
		{
			ud[i] = us[i];
			i ++;
		}
	return (desr);
}

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	i = 0;
	d = dst;
	s =(unsigned char*)src;
	while (i ++ && i < len)
		{
			if (d[i] == s[i])
				return (s);
		}

	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

int main()
{
	char	*ptr = "hello";
	memmove(ptr,ptr,5);

}