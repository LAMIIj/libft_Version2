#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stddef.h>

// first part 

int ft_isdigit(int d);
int	ft_atoi(const char	*str);
int	ft_strlen(char	*str);
int	ft_isalnum(int	c);
int	ft_isalpha(int c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);


void	ft_bzero(void	*str, size_t n);
void	*ft_memchr(const	void	*s,int	c, size_t n);
int	ft_memcmp(const	void *s1, const	void	*s2, size_t	n);

#endif 