#ifndef	FT_PRINTF_H
# define	FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

typdef struct s_bag
{
	va_list	args;
	int	counter;
}		t_bag;

int	ft_printf(const char *str, ...)
void	ischar(t_bag *arg_count);
void	isstring(t_bag *arg_count);
void	isint(t_bag *arg_count);
void	isun_int(t_bag *arg_count);
void	ispointer(t_bag *arg_count);
void	ishex(t_bag *arg_count, char c);

#endif
