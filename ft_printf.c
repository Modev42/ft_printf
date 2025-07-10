#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list args;

	va_start(args,format);

	i = 0;
	while(*format)
	{
		if (format[i] == '%')
		{
			if(format[i] =='c')
			{
				total += handle_conversion(format[i], args);
			}
		}	
		else
			ft_putchar_m(format[i]);
	}
}