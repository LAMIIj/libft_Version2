#include "libft.h"
#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const	void *s1, const	void	*s2, size_t	n)
{
	size_t		i;
	const	unsigned	char	*s;
	const	unsigned	char	*ss;

	i = 0;
	s = s1;
	ss = s2;
	if (!n)
		return 0;
	while (s[i] == ss[i] && i < n + 1)
		i ++;
	return (s[i] - ss[i]); 
}
