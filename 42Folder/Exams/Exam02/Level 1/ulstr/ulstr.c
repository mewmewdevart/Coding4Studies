#include <unistd.h>

void ft_putchar(char ch);

int main(int argc, char *argv[])
{
	char *str = argv[1];
	int i = 0;

	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				ft_putchar(str[i] + 32);
			else if (str[i] >= 'a' && str[i] <= 'z')
				ft_putchar(str[i] - 32);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}
