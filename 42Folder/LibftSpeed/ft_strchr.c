#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char *str;

	str = (char *)s;
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
			return(&str[i]);
		i++;
	}
	return (NULL);
}