/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:21:11 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/25 22:31:32 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(va_list args, const char format, \
						int printed_letters)
{
	if (format == '%')
		printed_letters = ft_putchar_pf('%', printed_letters);
	else if (format == 'c')
		printed_letters = ft_putchar_pf(va_arg(args, int), printed_letters);
	else if (format == 's')
		printed_letters = ft_putstr_pf(va_arg(args, char *), printed_letters);
	else if (format == 'd' || format == 'i')
		printed_letters = ft_putn_signed(va_arg(args, int), \
							"0123456789", printed_letters, 10);
	else if (format == 'u')
		printed_letters = ft_putn_unsigned(va_arg(args, unsigned int), \
							"0123456789", printed_letters, 10);
	else if (format == 'x')
		printed_letters = ft_putn_unsigned(va_arg(args, unsigned int), \
							"0123456789abcdef", printed_letters, 16);
	else if (format == 'X')
		printed_letters = ft_putn_unsigned(va_arg(args, unsigned int), \
							"0123456789ABCDEF", printed_letters, 16);
	else if (format == 'p')
		printed_letters = ft_putptr(va_arg(args, void *), printed_letters);
	else
		return (-1);
	return (printed_letters);
}

static int	ft_check_format(va_list args, const char *input, \
						int printed_letters)
{
	unsigned long long	c;

	c = 0;
	while (input[c])
	{
		if (input[c] == '%')
		{
			c++;
			printed_letters = ft_print_format(args, input[c], \
										printed_letters);
		}
		else
			printed_letters = ft_putchar_pf(input[c], printed_letters);
		if (printed_letters < 0)
			return (-1);
		c++;
	}
	return (printed_letters);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		printed_letters;

	printed_letters = 0;
	va_start(args, input);
	printed_letters = ft_check_format(args, input, printed_letters);
	va_end(args);
	return (printed_letters);
}
