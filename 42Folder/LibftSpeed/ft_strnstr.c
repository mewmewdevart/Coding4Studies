//#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i, j;

	if (*little == '\0')
		return ((char *)big);

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	const char *big = "Foo Bar Baz";
	const char *little = "Bar";
	size_t number = 4;

	printf("%s\n", ft_strnstr(big, little, number));
	printf("%d\n", strnstr(big, little, number));
	return (0);
}