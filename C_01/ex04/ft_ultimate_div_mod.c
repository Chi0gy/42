#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a % *b;
	*a = *a / *b;
	*b = swap;
}
