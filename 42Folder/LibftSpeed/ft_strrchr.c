#include "libft.h"
 
char	*ft_strrchr(const char *s, int c)
{
	char *str;
	int i;
	int len;

	i = 0;
	str = (char *)s;
	len = strlen(s);
	while(i < len)
	{
		if(str[len] == c)
			return (&str[len]);
		len--;
	}
	return (NULL);
}