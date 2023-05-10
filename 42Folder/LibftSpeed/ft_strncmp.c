#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' && i < n)
		i++;
	return(str1[i] - str2[i]);
}

int main(void)
{
	char s1[] = "larissa";
	char s2[] = "larisoo";
	size_t number = 6;

	printf("%d", ft_strncmp(s1, s2, number));
	return (0);
}
