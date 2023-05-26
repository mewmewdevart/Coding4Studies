#include <unistd.h>

void ft_putchar(char ch);

int main(int argc, char *argv[])
{
	char *str = argv[1];
	int i = 0;

	if (argc == 2)
	{
		while(str[i] != '\0')
		{
			if (str[i] == ' ')
				break;
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
