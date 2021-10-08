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

void	isun_int(t_bag *args)
{
	char	*str;
	int	value;

	value = va_arg(arg_count->args, unsigned int)
	str = uitoa(value);
	ft_putstr_fd(str, 1);
	arg_count->counter += ft_strlen(str);
	free(str);
}

static char	*uitoa(unsigned int n)
{
	char	*str
	int	len;

	len = numcounter;
	str = (char *)malloc(len + 1 sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
}
