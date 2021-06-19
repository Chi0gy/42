int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((*s1 != '\0' || *s2 != '\0') && count < n)
	{
		if (*s1 != *s2)
		{
			return ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
		}
		s1++;
		s2++;
		count++;
	}
	return (0);
}
