//#include "libft.h"
#include <stdio.h>

char    *ft_strlcat(char *dest, const char *src, size_t size)
{
    (void)dest;
    (void)src;
    (void)size;
    return (dest);
}

int main(void)
{
    char dest[] = "cristina";
    char src[] = "larissa";
    int number = 4;

    printf("%s", ft_strlcat(dest, src, number));
    return (0);
}