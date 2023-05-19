//#include "libft.h"
#include <stdio.h>

char    *ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t len_dst;
    size_t len_src;
    size_t i;

    i = 0;
    len_dst = 0;
    len_src = 0;
    while (dest[len_dst] != '\0')
        len_dst++;
    while (src[len_src] != '\0')
    {
        if (len_src < size)
            dest[len_dst++] = src[len_src];
        len_src++;
    }

    dest[len_dst] = '\0';
    return (dest);
}

int main(void)
{
    char dest[] = "cristina";
    char src[] = "larissaa";
    int number = 7;

    printf("%s", ft_strlcat(dest, src, number));
    return (0);
}