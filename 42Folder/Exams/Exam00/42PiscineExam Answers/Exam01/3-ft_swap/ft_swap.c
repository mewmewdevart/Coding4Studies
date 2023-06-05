#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*
int main(void)
{
    int n1, n2;

    n1 = 4;
    n2 = 7;

    printf("%d e %d", n1, n2);
    ft_swap(&n1, &n2);
    printf("\n%d e %d", n1, n2);
    return (0);
}*/