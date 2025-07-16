#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	uintptr_t	addr;
	char		hex[20];
	char		*base = "0123456789abcdef";
	int			i, len;

	addr = (uintptr_t)ptr;
	i = 19;
	hex[i--] = '\0';
	if (addr == 0)
		hex[i--] = '0';
	else
	{
		while (addr > 0)
		{
			hex[i--] = base[addr % 16];
			addr /= 16;
		}
	}
	write(1, "0x", 2);
	len = 19 - i - 1 + 2;
	write(1, &hex[i + 1], len - 2);
	return (len);
}