#include "ft_printf.h"

int	ft_putchar_m(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}
