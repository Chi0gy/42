char	*ft_strcat(char *dest, char *src)
{
	char	*copy;

	copy = dest;
	while (*copy != '\0')
	{
		copy++;
	}
	while (*src != '\0')
	{
		*copy++ = *src++;
	}
	*copy = '\0';
	return (dest);
}
