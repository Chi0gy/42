int	ft_str_is_printable(char *str)
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
		if ((intchar > 31 && intchar < 128) || intchar == 0)
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
