#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	l;
	char	limit;

	l = 'z';
	limit = 'a';
	while (l >= limit)
	{
		write(1, &l, 1);
		l--;
	}
}
