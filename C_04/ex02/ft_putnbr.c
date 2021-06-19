#include<unistd.h>

void	ft_putnbr(int nb);

void	ft_check_negative(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		write (1, "-", 1);
		ft_putnbr (nb *= -1);
	}
}

void	ft_putnbr(int nb)
{
	int	c;

	c = nb + 48;
	if (nb < 9 && nb > 0)
	{
		write (1, &c, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else if (nb < 0)
	{
		ft_check_negative(nb);
	}
	else
	{
		write (1, &c, 1);
	}
}
