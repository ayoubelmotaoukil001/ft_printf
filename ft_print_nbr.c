/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mota <ael-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 03:41:40 by ael-mota          #+#    #+#             */
/*   Updated: 2026/11/16 04:34:15 by ael-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	long	nbr;
	int		count;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		count += ft_print_char('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		count += ft_print_nbr(nbr / 10);
		count += ft_print_nbr(nbr % 10);
	}
	else
		count += ft_print_char(nbr + '0');
	return (count);
}
