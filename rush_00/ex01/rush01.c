#include <unistd.h>

void	ft_putchar(int countc, int countl, int coluna, int linha);

void	rush01(int coluna, int linha)
{
	int	countl;
	int	countc;

	countc = 1;
	countl = 1;
	while (countl <= linha)
	{
		while (countc <= coluna)
		{
			ft_putchar (countc, countl, coluna, linha);
			countc++;
		}
		write(1, "\n", 1);
		countc = 1;
		countl++;
	}
}
