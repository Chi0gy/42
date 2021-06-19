#include<unistd.h>
#include<stdlib.h>

int	ft_validation(char *rules_str, int *rules_int);
int	rush(int check[3][4][4], int *rules_int);

int	main (int argc, char *argv[])
{
	int	check[3][4][4];
	int	*rules_int;

	rules_int = (int *)malloc(16 * 4);
	if (argc == 2 && ft_validation(argv[1], rules_int)
		&& rush(check, rules_int))
	{
		free(rules_int);
		return (0);
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
}
