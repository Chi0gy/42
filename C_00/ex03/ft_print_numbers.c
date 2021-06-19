#include<unistd.h>

void	ft_print_numbers(void)
{
	char	num;
	char	numLimit;

	num = '0';
	numLimit = '9';
	while (num <= numLimit)
	{
		write (1, &num, 1);
		num++;
	}
}
