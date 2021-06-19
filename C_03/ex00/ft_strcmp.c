int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
