#include "ft_printf.h"

int	ft_print_uns(unsigned int n)
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
