int	ft_atoi(char *str)
{
	int	sign;
	int	n;

	sign = 1;
	n = 0;
	while ((*str > 6 && *str < 14) || *str == 32)
	{
		str++;
	}
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = sign * -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		n = (*str - 48) + (n * 10);
		str++;
	}
	return (n * sign);
}
