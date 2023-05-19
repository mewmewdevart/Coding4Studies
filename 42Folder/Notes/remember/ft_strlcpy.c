#include "libft.h"

char    *ft_strlcpy(char *dest, const char *src, size_t size)
{
    char    *source;
    size_t     i;
    size_t     j;

    i = 0;
    j = 0;
    source = (char *)src;
    if (!src)
        return (NULL);
    while (source[i] != '\0')
    {
        if (i <= size)
            dest[j++] = source[i];
        i++;
    }
    dest[j] = '\0';
    return (dest);
}

