#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

// first part 
void	*ft_calloc(size_t count, size_t size);
int	ft_strncmp(const	char	*str1, const	char*str2, size_t	n);
int ft_isdigit(int d);
int	ft_atoi(const char	*str);
size_t	ft_strlen(const char *s);
int	ft_isalnum(int	c);
int	ft_isalpha(int c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void	ft_bzero(void	*str, size_t n);
void	*ft_memchr(const	void	*s,int	c, size_t n);
int	ft_memcmp(const	void *s1, const	void	*s2, size_t	n);
void	*ft_memcpy(void	*dest, const	void	*src, size_t	n);
void	*ft_memmove(void	*dest, const	void	*src, size_t	n);
void	*ft_memset(void	*s, int	c, size_t	n);

char    *ft_itoa(int n);
char    *ft_substr(const    char    *s, unsigned int start, size_t  len);
char	*ft_strchr(const	char	*str, int	c);
char	*ft_strnstr(const	char	*str, const	char	*word,	size_t	len);
char    *ft_substr(const    char    *s, unsigned int start, size_t  len);
char	*ft_strtrim(char	const	*s1, char	const	*set);
 char *ft_strdup(const char *s1 );
char	**ft_split(char	*s,char	c);
char	*ft_strjoin(char	const	*s1, char	const	*s2);
char	*ft_strmapi(char	const	*s, char	(*f)(unsigned int,char));
char * ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);

size_t	ft_strlcat(char	*dest, char	*src,	size_t	size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);






#endif 
