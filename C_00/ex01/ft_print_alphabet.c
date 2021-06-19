#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	l;
	char	limit;

	l = 'a';
	limit = 'z';
	while (l <= limit)
	{
		write (1, &l, 1);
		l++;
	}
}
