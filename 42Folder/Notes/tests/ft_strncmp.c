#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(void)
{
    char s1[] = "laerissa";
    char s2[] = "larissa";
    size_t number = 4;

    printf("%d\n", ft_strncmp(s1, s2, number));
    printf("%d\n", strncmp(s1, s2, number));
    return (0);
}