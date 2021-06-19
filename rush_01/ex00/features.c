#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_validation(char *rules_str, int *rules_int)
{
	int	c;

	c = 0;
	while (rules_str[c] != '\0')
	{
		if (rules_str[c] >= '1' && rules_str[c] <= '4')
		{
			rules_int[c] = rules_str[c] - '0';
			c++;
		}
		else if (rules_str[c] == ' ')
			rules_str++;
		else
			return (0);
	}
	return (c == 16);
}

int	see_tower_aux(int *line_matriz, int offset)
{
	int	i;
	int	v;
	int	last;

	i = 0;
	v = 0;
	last = 0;
	while (i < 4)
	{
		if (*line_matriz > last)
		{
			last = *line_matriz;
			v++;
		}
		line_matriz += offset;
		i++;
	}
	return (v);
}

int	see_tower(int matriz[4][4], int direction, int position)
{
	int	v;

	v = 0;
	if (direction == 0)
		v = see_tower_aux(&matriz[0][position], 4);
	else if (direction == 1)
		v = see_tower_aux(&matriz[3][position], -4);
	else if (direction == 2)
		v = see_tower_aux(&matriz[position][0], 1);
	else if (direction == 3)
		v = see_tower_aux(&matriz[position][3], -1);
	return (v);
}

int	valid(int check[4][4], int *rules_int)
{
	int	i;
	int	j;
	int	c;

	c = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (rules_int[c] != see_tower(check, i, j))
				return (0);
			j++;
			c++;
		}
		i++;
	}
	return (1);
}
