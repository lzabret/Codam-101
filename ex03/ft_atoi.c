int	ft_isspace(char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r')
		return (1);
	else if (*str == '\t' || *str == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		val;
	int		sign;

	val = 0;
	sign = 1;
	while (ft_isspace(str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10 + (*str - '0');
		str++;
	}
	return (val * sign);
}

// #include <stdio.h>
// int main()
// {
// 	int nb = ft_atoi("\n \t \v -++12345noMistaDontPrint666");
// 	printf("nb = %d\n", nb);
// 	return 0;
// }