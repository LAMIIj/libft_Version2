#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <inttypes.h>
# include <unistd.h>
# define BUFF_SIZE 2048

int	ft_isalpha(int c);
int ft_isdigit(int a);
int ft_isanum(int c);
int ft_isascii(int c);
int	ft_ispace(char c);
int ft_isprint(int  c);


#endif