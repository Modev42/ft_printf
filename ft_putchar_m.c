#include <unistd.h>

int	ft_putchar_m(char c)
{
	write(1, &c, 1);
}
