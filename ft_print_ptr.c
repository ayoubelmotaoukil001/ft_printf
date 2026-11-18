/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mota <ael-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 05:26:01 by ael-mota          #+#    #+#             */
/*   Updated: 2026/11/18 05:06:56 by ael-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count += ft_print_str("(nil)");
		return (count);
	}
	count += ft_print_char('0');
	count += ft_print_char('x');
	count += ft_print_hex((unsigned long long)ptr, 'x');
	return (count);
}
