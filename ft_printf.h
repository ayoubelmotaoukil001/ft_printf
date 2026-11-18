/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mota <ael-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 01:05:19 by ael-mota          #+#    #+#             */
/*   Updated: 2026/11/18 06:02:56 by ael-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int ft_printf(const char *fmt, ...);
int ft_format(char spec, va_list ap);
int ft_print_char(int c);
int ft_print_str(const char *s);
int ft_print_nbr(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned long long n, char spec);
int ft_print_ptr(void *ptr);

#endif
