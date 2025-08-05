#include "ft_printf.h"

int	ft_print_hex(unsigned int n, int upper)
{
	char	*base;
	char	buf[9];
	int		i;
	int		ret;

	base = upper ? "0123456789ABCDEF" : "0123456789abcdef";
	i = 8;
	buf[i] = '\0';
	if (n == 0)
		return (write(1, "0", 1) == -1 ? -1 : 1);
	while (n)
		buf[--i] = base[n % 16], n /= 16;
	ret = write(1, &buf[i], 8 - i);
	return ((ret == -1) ? -1 : 8 - i);
}