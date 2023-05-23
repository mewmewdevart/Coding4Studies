#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (strlen(little) == 0)
        return ((char *)big);

    i = 0;
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while(big[i + j] == little[j] && (i + j ) < len)
        {
            if (little[j + 1] == '\0')
                return((char *)&big[i]);
                j++;
        }
        i++;
    }
    return (NULL);
}


int main(void)
{
    char big[] = "larissa";
    char little[] = "is";
    size_t number = 5;

    printf("%s\n", ft_strnstr(big, little, number));
    printf("%s", strstr(big, little));
    return (0);
}
