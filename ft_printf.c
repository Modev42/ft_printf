include "f_printf.h"
int	handle_conversion(char conv, va_list args)
{
	








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
	var_end(args);
	return (total);
}
