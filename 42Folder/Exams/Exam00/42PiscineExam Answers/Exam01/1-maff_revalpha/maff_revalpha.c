#include <unistd.h>

int	main(void)
{
	char	letter;
	int	number;

	letter = 'z';
	number = 1;
	while(letter >= 'a')
	{
		if ((number%2) == 0)
		{
			letter -= 32;
			write(1, &letter, 1);
			letter += 32;
		} else
			write(1, &letter, 1);
		number++;
		letter--;
	}
	return(0);
}
