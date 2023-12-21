#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

// first part 

int	ft_strncmp(const	char	*str1, const	char*str2, size_t	n);
int ft_isdigit(int d);
int	ft_atoi(const char	*str);
int	ft_strlen(char	*str);
int	ft_isalnum(int	c);
int	ft_isalpha(int c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
int	ft_toupper(int c);
int	ft_tolower(int c);



void	ft_bzero(void	*str, size_t n);
void	*ft_memchr(const	void	*s,int	c, size_t n);
int	ft_memcmp(const	void *s1, const	void	*s2, size_t	n);
void	*ft_memcpy(void	*dest, const	void	*src, size_t	n);
void	*memmove(void	*dest, const	void	*src, size_t	n);
void	*ft_memset(void	*s, int	c, size_t	n);


char	*ft_strchr(const	char	*str, int	c);
char	*ft_strnstr(const	char	*str, const	char	*word,	size_t	len)


size_t	ft_strlcat(char	*dest, char	*src,	size_t	size);






#endif 