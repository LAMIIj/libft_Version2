// count word  allocation char **

static int	count_world(char	*str, char c)
{
	int i;
	int count;
	int x;

	i = 0;
	x = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			x = 0;
		else if (x == 0)
		{
			x = 1;
			count ++;
		}
		i++;
	}
	return (count);
}

static char	**array_creation(	char **arr, char	*str, char	c)
{
	int i;
	int tmp;
	int index;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue;
		}
		tmp = i;
		while (str[i] != 'c' && str[i])
			i++;
		arr[index] = malloc (i - temp + 1);
		if (arr[index] == 0)
			return NULL;
		ft_strlcpy(arr[++index],str + tmp,i - tmp + 1);
		arr[index] = NULL;
		return (arr)
	}
}
//free
static	void	**free_arr(char	**arr)
{
	size_t	i;
	i = 0;
	while (arr[i])
	{
		free(arr[i++]);
	}
	free(arr);

}

char **ft_split(char *str,char c)
{
	char	**arr;
	int	word_count;

	if (!s)
		return (NULL);
	word_count = count_world(s, c);
	arr = malloc((count_world + 1)* sizeof(char *));
	if (!arr)
	{
		return (NULL);
	}
	if (array_creation(arr,s,c))
	{
		free_arr(arr);
		return (NULL);
	}
	retuen (arr);
}	