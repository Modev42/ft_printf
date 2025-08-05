#include "ft_printf.h"

static int	write_hex(uintptr_t n, char *buf, int i)
{
	char	*base = "0123456789abcdef";

	if (n == 0)
	{
		buf[--i] = '0';
		return (i);
	}
	while (n)
		buf[--i] = base[n % 16], n /= 16;
	return (i);
}

int	ft_print_ptr(void *ptr)
{
	char		buf[20];
	int			start;
	int			len;
	int			ret;

	start = write_hex((uintptr_t)ptr, buf, 20);
	buf[--start] = 'x';
	buf[--start] = '0';
	len = 20 - start;
	ret = write(1, &buf[start], len);
	return ((ret == -1) ? -1 : len);
}