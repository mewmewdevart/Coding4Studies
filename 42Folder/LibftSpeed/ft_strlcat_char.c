#include "libft.h"

char  *ft_strlcat_char(char *dst, const char *src, size_t size)
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