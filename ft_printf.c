/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 05:11:04 by ael-mota          #+#    #+#             */
/*   Updated: 2026/11/18 10:44:11 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (spec == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (spec == 'p')
		count += ft_print_ptr(va_arg(ap, void *));
	else if (spec == 'i' || spec == 'd')
		count += ft_print_nbr(va_arg(ap, int));
	else if (spec == 'u')
		count += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (spec == 'x')
		count += ft_print_hex(va_arg(ap, unsigned int), 'x');
	else if (spec == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), 'X');
	else if (spec == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, fmt);
	i = 0;
	count = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			count += ft_format(fmt[i + 1], ap);
			i++;
		}
		else
			count += ft_print_char(fmt[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
