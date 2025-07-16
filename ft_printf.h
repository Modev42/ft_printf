#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	handle_conversion(char conv, va_list args);

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_int(int n);
int	ft_print_uns(unsigned int n);
int	ft_print_hex(unsigned int n);
int	ft_print_ptr(void *ptr);

#endif
