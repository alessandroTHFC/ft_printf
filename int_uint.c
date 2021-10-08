#include "ft_printf.h"

void	isint(t_bag arg_count)
{
	char	*str;
	int	value;

	value = va_arg(arg_count->args, int);
	str = ft_itoa(value);
	ft_putstr_fd(str, 1);
	arg_count->counter += ft_strlen(str);
	free(str);
}


