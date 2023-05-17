//#include "libft.h"
#include <stdio.h>
 #include <string.h>

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

int main(void)
{
	char str[] = "larissa";
	char ch = 'a';

	printf("ft_strchr: %s\n", ft_strchr(str, ch));
	printf("strchr: %s\n", strchr(str, ch));
	return (0);
}