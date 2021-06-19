char	*ft_strlowcase(char *str)
{
	int	c;
	int	intchar;

	c = 0;
	intchar = 0;
	while (str[c] != '\0')
	{
		intchar = (int)str[c];
		if (intchar > 64 && intchar < 91)
		{
			intchar += 32;
			str[c] = intchar;
		}
		c++;
	}
	return (str);
}
