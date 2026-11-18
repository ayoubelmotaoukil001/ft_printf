/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mota <ael-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 00:47:40 by ael-mota          #+#    #+#             */
/*   Updated: 2026/11/18 04:57:23 by ael-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long n, char spec)
{
	char	*basex;
	int		count;

	count = 0;
	if (spec == 'x')
		basex = "0123456789abcdef";
	else if (spec == 'X')
		basex = "0123456789ABCDEF";
	if (n > 15)
	{
		count += ft_print_hex(n / 16, spec);
		count += ft_print_hex(n % 16, spec);
	}
	else
		count += ft_print_char(basex[n]);
	return (count);
}
