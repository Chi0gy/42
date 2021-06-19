#include<unistd.h>

void	ft_prt_value(int fst, int snd)
{
	int	dezn_p;
	int	uni_p;
	int	dezn_s; 
	int	uni_s;

	dezn_p = ((int)((fst % 100) / 10)) + 48;
	dezn_s = ((int)((snd % 100) / 10)) + 48;
	uni_p = ((int)((fst % 100) % 10)) + 48;
	uni_s = ((int)((snd % 100) % 10)) + 48;
	write(1, &dezn_p, 1);
	write(1, &uni_p, 1);
	write(1, " ", 1);
	write(1, &dezn_s, 1);
	write(1, &uni_s, 1);
	if (! (fst == 98 && snd == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	fst;
	int	snd;
	int	reset;

	fst = 0;
	reset = 1;
	snd = 1;
	while (fst <= 99)
	{
		while (snd <= 99 && fst <= 98)
		{
			if (snd != fst)
				ft_prt_value(fst, snd);
			snd++;
		}
		reset++;
		snd = reset;
		fst++;
	}
}
