#include <unistd.h>

void	ft_putnbr(int nb)
{	
	int	rest;

	if (nb < 0)
	{	
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
		}
		nb = nb * -1;
	}
	rest = nb % 10;
	rest += '0';
	if (nb > 9)
	{
		nb = nb / 10;
		ft_putnbr(nb);
	}
	write (1, &rest, 1);
}
