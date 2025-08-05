#include "ft_printf.h"

int	handle_conversion(char conv, va_list args)
{
	if (conv == 'c')
		return (ft_print_char((char)va_arg(args, int)));
	else if (conv == 'd' || conv == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (conv == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (conv == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (conv == 'u')
		return (ft_print_uns(va_arg(args, unsigned int)));
	else if (conv == 'x' || conv == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), conv == 'X'));
	else if (conv == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		tmp;
	int		total;
	va_list	args;

	i = 0;
	total = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			tmp = handle_conversion(format[++i], args);
			if (tmp == -1)
				return (-1);
			total += tmp;
		}
		else
		{
			if (ft_print_char(format[i]) == -1)
				return (-1);
			total++;
		}
		i++;
	}
	va_end(args);
	return (total);
}