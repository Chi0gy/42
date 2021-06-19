#include <unistd.h>

void	ft_putchar(int countc, int countl, int coluna, int linha)
{
	if ((countc == 1 && countl == 1) || ((countc == coluna && countc != 1) && \
	(countl == linha && countl != 1)))
	{
		write(1, "A", 1);
	}
	else if ((countl == 1 && countc == coluna) || \
	(countc == 1 && countl == linha))
	{
		write(1, "C", 1);
	}
	else if ((countc == 1 || countc == coluna) || \
		(countl == 1 || countl == linha))
	{
		write(1, "B", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
