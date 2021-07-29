#include "string.h"
#include "ft_base.h"

char	*ft_strdup(char	*src)
{
	int		size;
	char	*str;
	char	*res;

	size = ft_strlen(src);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return ((void *) 0);
	res = str;
	while (*src != '\0')
	{
		*str = *src;
		++str;
		++src;
	}
	*str = '\0';
	return (res);
}

char	*ft_strdup_stop(char	*src, char	stop)
{
	int		size;
	char	*str;
	char	*res;

	size = ft_strlen(src);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return ((void *) 0);
	res = str;
	while (*src != stop)
	{
		*str = *src;
		++str;
		++src;
	}
	*str = '\0';
	return (res);
}

char	*go_to_char(char *str, char c)
{
	while (*str && *str != c)
		str++;
	return (str);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (*(src + n) != '\0')
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = *(src + n);
	return (dest);
}

char	*ft_strcat(char	*dest, char	*src)
{
	unsigned int	count;
	unsigned int	size_dest;

	count = 0;
	size_dest = ft_strlen(dest);
	while (src[count] != '\0')
	{
		dest[size_dest + count] = src[count];
		count++;
	}
	dest[size_dest + count] = '\0';
	return (dest);
}
