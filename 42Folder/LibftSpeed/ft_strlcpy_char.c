#include "libft.h"

char	*ft_strlcpy_char(char *dest, const char *src, size_t size)
{
    size_t i;
    char *str;

    i = 0;
    str = (char *)src;
    while(str[i] != '\0' && i < size)
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}