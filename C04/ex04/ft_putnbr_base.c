#include <unistd.h>

int	ft_check_base(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (i != j)
			{
				if (str[i] == str[j] || str[i] == '+' || str[i] == '-')
					return (0);
			}
			j++;
		}
		i++;
		j = 0;
	}
	if (i > 1)
		return (i);
	return (0);
}

void	ft_base_txt(int nbr, char *base, int baselen)
{
	if (nbr > 0)
	{
		ft_base_txt((nbr / baselen), base, baselen);
		write(1, &base[nbr % baselen], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselen;

	if (nbr == 0)
		write(1, "0", 1);
	baselen = ft_check_base(base);
	if (baselen == 0)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_base_txt(2, base, baselen);
		ft_base_txt(147483648, base, baselen);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_base_txt(-nbr, base, baselen);
	}
	else
		ft_base_txt(nbr, base, baselen);
}

// int	main(void)
// {
// 	char *base = "01";
// 	ft_putnbr_base(-1234, base);
// }