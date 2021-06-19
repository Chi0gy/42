int	ft_iterative_factorial(int nb)
{
	int	f;

	f = nb -1;
	if(nb > 0)
	{
		while(f > 0)
		{
			nb *= f;
			f--;
		}
	}
	else if (nb == 0)
	{
		nb = 1;
	}
	else
	{
		nb = 0;
	}
	return (nb);
}
