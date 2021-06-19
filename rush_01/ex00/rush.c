int		valid(int check[4][4], int *rules_int);
void	ft_putchar(char c);
int		fill_board(int check[3][4][4], int *rules_int, int r, int c);

void	print_matriz(int matriz[4][4])
{
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{	
		c = 0;
		while (c < 4)
		{
			ft_putchar('0' + matriz[r][c]);
			ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}

int	fill_board_aux(int check[3][4][4], int *rules_int, int r, int c)
{
	int	val;

	val = 0;
	while (++val < 5)
	{
		if (check[0][r][val - 1] || check[1][c][val - 1])
			continue ;
		check[0][r][val - 1] = 1;
		check[1][c][val - 1] = 1;
		check[2][r][c] = val;
		if (fill_board(check, rules_int, r, c + 1))
			return (1);
		check[0][r][val - 1] = 0;
		check[1][c][val - 1] = 0;
	}
	return (0);
}

int	fill_board(int check[3][4][4], int *rules_int, int r, int c)
{
	if (r == 4)
	{
		if (valid(check[2], rules_int))
		{
			print_matriz(check[2]);
			return (1);
		}
		return (0);
	}
	if (c == 4)
	{
		return (fill_board(check, rules_int, r + 1, 0));
	}
	else
	{
		return (fill_board_aux(check, rules_int, r, c));
	}
}

void	init(int check[3][4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			check[0][i][j] = 0;
			check[1][i][j] = 0;
			check[2][i][j] = 0;
			j++;
		}
		i++;
	}
}

int	rush(int check[3][4][4], int *rules_int)
{
	init(check);
	if (fill_board(check, rules_int, 0, 0))
		return (1);
	else
		return (0);
}
