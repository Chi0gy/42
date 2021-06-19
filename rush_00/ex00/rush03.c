#include <unistd.h>

void	ft_putchar(int countc, int countl, int coluna, int linha);

void	rush(int coluna, int linha)
{
	int	countc;
	int	countl;

	countl = 1;
	countc = 1;
	while (countl <= linha)
	{
		countc = 1;
		while (countc <= coluna)
		{
			ft_putchar(countc, countl, coluna, linha);
			countc++;
		}
		write(1, "\n", 1);
		countl++;
	}
}
