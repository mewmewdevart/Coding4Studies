#include <stdio.h>
#include <string.h>

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

int main(void)
{
	char s[] = "larissa";
	char ch = 'i';

	printf("%s\n", ft_strrchr(s, ch));
	printf("%s\n", strrchr(s, ch));
	return (0);
}