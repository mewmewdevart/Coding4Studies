#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i, j;
    char tmp;

    i = j = 0;
    while(str[j] != '\0')
        j++;
    j -= 1;
    while(i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}

int main(void)
{
    char s1[] = "larissa";
    
    printf("%s", ft_strrev(s1));
}