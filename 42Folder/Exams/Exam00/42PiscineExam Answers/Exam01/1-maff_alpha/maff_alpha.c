#include <unistd.h>

int main(void)
{
	char	letter;
	int	number;

	letter = 'a';
	number = 1;
	while(letter <= 'z')
	{
		if ((number%2) == 0)
		{
			letter -= 32;
			write(1, &letter, 1);
			letter += 32;
		} else
			write(1, &letter, 1);
		number++;
		letter++;
	}
	write(1, "\n", 1);
	return (0);
}
