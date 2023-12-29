#include "libft.h"

static void	array_clearing(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

static int	count_words(char const *str, char c)
{
	int	cpt;
	int	i;

	cpt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		cpt++;
		while (str[i] != c && str[i])
			i++;
	}
	return (cpt);
}

static char	**array_creating(char **arr, char const *str, char c)
{
	int	ind;
	int	i;
	int	temp;

	ind = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		temp = i;
		while (str[i] != c && str[i])
			i++;
		arr[ind] = malloc(i - temp + 1);
		if (!arr[ind])
			return (NULL);
		ft_strlcpy(arr[ind++], str + temp, i - temp + 1);
	}
	arr[ind] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = count_words(s, c);
	array = malloc((words_count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (!array_creating(array, s, c))
	{
		array_clearing(array);
		return (NULL);
	}
	return (array);
}
