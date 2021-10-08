#include "ft_printf.h"

int	ft_prinft(const char *str, ...)
{
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
	free(arg_count);
	return (totalprinted);
}

static t_bag	*initialise(void)
{
	t_bag	*arg_counter;

	arg_counter = (t_bag *)malloc(sizeof(t_bag));
	if (arg_counter == NULL)
		return (NULL);
	arg_count->counter = 0;
	return (arg_counter);
}

void	typechecker(const char c, t_bag *arg_counter)
{
	if (c == 'i' || c == 'd')
		isint(c);
	else if (c == 'c')
		ischar(c);
	else if (c == 's')
		isstring(c);
	else if (c == 'u')
		isun_int(c);
	else if (c == 'p')
		ispointer(c);
	else if (c == 'x' || c == X)
		ishex(c);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		arg_count->counter++;
	}
}
