#include "ft_printf.h"

int	ft_print_hex(unsigned int n)
{
	char	buf[9];
	char	*base = "0123456789abcdef";
	int		len, i;

	i = 8;
	buf[i--] = '\0';
	if (n == 0)
		buf[i--] = '0';
	else
	{
		unsigned int nb = n;
		while (nb > 0)
		{
			buf[i--] = base[nb % 16];
			nb /= 16;
		}
	}
	len = 8 - i - 1;
	write(1, &buf[i + 1], len);
	return (len);
}