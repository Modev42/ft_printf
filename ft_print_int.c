#include "ft_printf.h"

static int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static int	ft_putnbr(unsigned int n)
{
	char	buf[10];
	int		i;
	int		ret;

	i = 10;
	if (n == 0)
		buf[--i] = '0';
	else
		while (n)
			buf[--i] = '0' + (n % 10), n /= 10;
	ret = write(1, &buf[i], 10 - i);
	return ((ret == -1) ? -1 : 10 - i);
}

int	ft_print_int(int n)
{
	int		count;
	int		ret;

	count = 0;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		count++;
		n = -n;
	}
	ret = ft_putnbr((unsigned int)n);
	if (ret == -1)
		return (-1);
	return (count + ret);
}
