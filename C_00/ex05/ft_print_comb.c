#include<unistd.h>

void	ft_putchar(char cent, char dezn, char uni)
{
	write(1, &cent, 1);
	write(1, &dezn, 1);
	write(1, &uni, 1);
	if (cent != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		cent;
	int		dezn;
	int		uni;

	cent = '0';
	while (cent <= '9')
	{
		dezn = '1';
		while (dezn <= '9')
		{
			uni = '2';
			while (uni <= '9')
			{
				if (cent < dezn && dezn < uni)
				{
					ft_putchar(cent, dezn, uni);
				}
				uni++;
			}
			dezn++;
		}
		cent++;
	}
}
