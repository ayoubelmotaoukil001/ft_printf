/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mota <ael-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 03:41:40 by ael-mota          #+#    #+#             */
/*   Updated: 2026/11/17 00:47:02 by ael-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	count;

	if (n == 0)
		return (ft_print_char('0'));
	count = 0;
	if (n > 9)
	{
		count += ft_print_unsigned(n / 10);
		count += ft_print_unsigned(n % 10);
	}
	else
	{
		count += ft_print_char(n + '0');
	}
	return (count);
}
