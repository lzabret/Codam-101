int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != 0)
	{
		i++;
		str++;
	}
	return (i);
}
