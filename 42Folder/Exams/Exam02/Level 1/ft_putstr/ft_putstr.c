#include <unistd.h>

static void ft_putchar(char ch);

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

static void ft_putchar(char ch)
{
	write(1, &ch, 1);
}
