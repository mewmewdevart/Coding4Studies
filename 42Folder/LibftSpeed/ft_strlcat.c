#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len_src;
    size_t len_dst;
    size_t result;

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
    result = len_dst + len_src;
    return (result);
}
