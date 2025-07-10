#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list;

	va_start(format);

	i = 0;
	while(*format)
	{
		if (format[i] == '%')
		{
			if(format[i] =='c')
			{
				
			}
			else if(format[i] == 's')
			{

			} 
			else if(format[i] == 'p')
			{

			}

		}	
		else
			ft_putchar_m(format[i]);
	}
}