void	ischar(t_bag *arg_count)
{
	ft_putchar_fd(va_arg(arg_count->args, int);
	arg_count->counter++;
}

void	isstring(t_bag *arg_count)
{
	char	*str;
	int	len;

	str = va_arg(arg_count->args, char *)
	if (str == NULL)
	{	
		ft_putstr_fd("(null)", 1);
		arg_count->counter += 6;
	}
	else
	{
		len = ft_strlen(str);
		ft_putstr_fd(str, 1);
		arg_count->counter += len;
	}
}
