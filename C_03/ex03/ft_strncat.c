char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*copy;

	copy = dest;
	while (*copy != '\0')
	{
		copy++;
	}
	while ((nb--) && *src != '\0')
	{
		*copy++ = *src++;
	}
	*copy = '\0';
	return (dest);
}
