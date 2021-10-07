#include "ft_printf.h"

int	ft_prinft(const char *str, ...)

t_bag	*arg_count;
int	totalprinted;

arg_count = initialise();
totalprinted = 0;
va_start(arg_count->args, str);
while (*str != '\0')
{
	if (*str == '%')
	{
		str++;
		typecheck(str, arg_count);
		str++
	}
	else 
	{
		ft_putchar_fd(*str++, 1)
		arg_count->counter++;
		str++
	}
}
totalprinted = arg_count->counter;
va_end(arg_count->args);
return (totalprinted)
