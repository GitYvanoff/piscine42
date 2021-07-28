#include <stdlib.h>

int	size_wrd(char	*str, char	*charset)
{
	int	count;

	count = 0;
	while (str[count] && in_str(str[count], charset) == -1)
		count++;
	return (count);
}

int	in_str(char	c, char	*base)
{
	int	offset;

	offset = 0;
	while (*(base + offset))
		if (c == *(base + offset++))
			return (offset - 1);
	return (-1);
}

int	wrd_count(char	*str, char	*charset)
{
	int	size;
	int	nb_words;

	nb_words = 0;
	while (*str)
	{
		while (*str && in_str(*str, charset) != -1)
			str++;
		size = wrd_size(str, charset);
		if (size)
		{
			nb_words++;
			str += size;
		}
	}
	return (nb_words);
}

char	**ft_split(char	*str, char	*charset)
{
	int	i;
	int	j;
	char	*wrd;
	char	**tab;

	i = o     i = 0;
	tab = malloc((wrd_count(str, charset) + 2) * sizeof(char *));
	while (*str)
	{
		while (*str && in_str(*str, charset) != -1)
			str++;
		j = 0;
		if (size_wrd(str, charset))
		{
			word = malloc((size_wrd(str, charset) + 1) * sizeof(char));
			while (*str && in_str(*str, charset) == -1)
			{
				word[j++] = *(str++);
			}
			word[j] = '\0';
			tab[i++] = word;
		}
	}
	tab[i] = 0;
	return (tab);
}
