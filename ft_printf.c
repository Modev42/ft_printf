#include "ft_printf.h"
int	handle_conversion(char conv, va_list args)
{
	else if (conv == 'c')
	{
		char c = (char)va_arg(args, int);
		return (ft_print_char(c));
	}	
	else if (conv == 'd' || conv == 'i')
	{
		int m = va_arg(args, int);
		return (ft_print_int(m));
	}
	else if (conv == 'p')
	{
		void *ptr = va_arg(args, void *);
		return (ft_print_ptr(ptr));
	}
	else if (conv == 's')
	{
		char *str = va_arg(args, char *);
		return (ft_print_str(str));
	}
	else if (conv == 'u')
	{
		unsigned int un = va_arg(args, unsigned int);
		return (ft_print_uns(un));
	}
	else if (conv == 'x' || conv == 'X')
	{
		unsigned int hex = va_arg(args, unsigned int);
		return (ft_print_hex(hex));
	}
	else if (conv == '%')
		ft_putchar_m('%');
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	tmp;
	va_list args;

	va_start(args,format);

	i = 0;
	while(*format)
	{
		if (format[i] == '%' && format[i+1] != '\0')
		{
				total += handle_conversion(format[++i], args);
				i++;
		}	
		else
		{
			ft_putchar_m(format[i]);
			i++;
		}
	}
	va_end(args);
	return (total);
}
