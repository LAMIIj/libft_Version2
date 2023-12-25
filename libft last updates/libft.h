#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int     ft_isdigit(int d);
int	    ft_atoi(const	char	*str) ;
size_t	ft_strlen(const char *s);
int	    ft_isalnum(int	c);
int	    ft_isalpha(int c);
int	    ft_isascii(int	c);
int	    ft_isprint(int	c);
int	    ft_toupper(int c);
int	    ft_tolower(int c);
void	*ft_memchr(const	void	*s,int	c, size_t n);
void	*ft_memset(void	*s, int	c, size_t	n);
void	ft_bzero(void	*str, size_t n);
void	*ft_memmove(void	*dest, const	void	*src, size_t	n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
void    ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl_fd(char *s, int fd);

// <------------------------------------------------------------------------>

// int ft_memcmp(const	void *s1, const	void	*s2, size_t	n);

// void	*ft_memcpy(void	*dest, const	void	*src, size_t	n);

// int	ft_strncmp(const	char	*str1, const	char*str2, size_t	n);

// char	*ft_strchr(const	char	*str, int	c);*
// char    *strdup(const char *s1);


// size_t	ft_strlcat(char	*dest, char	*src,	size_t	size);






#endif 