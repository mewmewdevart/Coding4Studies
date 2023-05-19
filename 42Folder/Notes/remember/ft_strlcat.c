#include <stdio.h>

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}
char  *ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len_src;
    size_t len_dst;

    i = len_dst = 0;
    len_src = ft_strlen(src);
    while (dst[len_dst] != '\0' && len_dst < size)
        len_dst++;
    if (len_dst < size)
    {
        while(src[i] != '\0' && (i + len_dst) < (size-  1))
        {
            dst[i + len_dst] = src[i];
            i++;
        }
        dst[i + len_dst] = '\0';
    }
    return (dst);
}

int main(void)
{
    char dst[] = "benedi";
    char str[] = "larissa";
    size_t number = 8;
    printf("%s", ft_strlcat(dst, str, number));
    return (0);
}