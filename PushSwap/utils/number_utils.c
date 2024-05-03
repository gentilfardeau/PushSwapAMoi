#include "../include/push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nb = (nb * 10) + (nptr[i++] - '0');
	return (nb * sign);
}

void ft_putnbr(int n)
{
	long int	nb;

	if (!n)
		return ;
	nb = n;
	if (nb == -2147483648)
	{
		ft_write("-2147483648");
		return ;
	}
	else
	{
		if (nb < 0)
		{
			ft_write("-");
			nb *= -1;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_write_digit(nb % 10 + '0');
	}
}