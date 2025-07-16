#include "ft_printf.h"

int	ft_print_uns(unsigned int n)
{
	char	buf[11];
	int		len, i;

	i = 10;
	buf[i--] = '\0';
	if (n == 0)
		buf[i--] = '0';
	else
	{
		unsigned int nb = n;
		while (nb > 0)
		{
			buf[i--] = '0' + (nb % 10);
			nb /= 10;
		}
	}
	len = 10 - i - 1;
	write(1, &buf[i + 1], len);
	return (len);
}