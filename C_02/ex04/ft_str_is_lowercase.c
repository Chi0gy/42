int	ft_str_is_lowercase(char *str)
{
	int	c;
	int	result;
	int	intchar;

	c = 0;
	result = 1;
	intchar = 0;
	while (str[c] != '\0')
	{
		intchar = (int)str[c];
		if ((intchar > 96 && intchar < 123) || intchar == 0)
		{
			result = 1;
		}
		else
		{
			result = 0;
			return (result);
		}
		c++;
	}
	return (result);
}
