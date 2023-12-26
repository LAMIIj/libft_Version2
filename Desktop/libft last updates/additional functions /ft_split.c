// count word  allocation char **

int	count_world(char	*str, char c)
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

char	**array_creation(	char **arr, char	*str, char	c)
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

// get_word


//free

"hi amine             je suis seul en face tous le monde" 

char **ft_split(char *str,char c)
{
	int n = count_world(str);
	int i = 0;
	char **s = malloc(n + 1);
	//
	while (str)
	{
		s[i] = count_world(str);
	}
	
}	