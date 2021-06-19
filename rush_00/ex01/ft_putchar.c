#include<unistd.h>

void	ft_putchar(int ca, int la, int lc, int ll)
{
	if ((((ca == lc && la == ll) && (lc > 1)) && (la > 1 && ca == lc)) \
	|| (ca == 1 && la == 1))
	{
		write(1, "/", 1);
	}
	else if ((ca == 1 && la == ll) || (la == 1 && ca == lc))
	{
		write(1, "\\", 1);
	}
	else if (((la == 1 && ca < lc) || (la == ll)) || (ca < 2 && la < ll) \
	|| (ca == lc && la < ll))
	{
		write(1, "*", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
