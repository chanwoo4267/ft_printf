/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:07:39 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/25 22:08:36 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putn_unsigned(unsigned int num, char *base, int printed_letters, \
				unsigned int base_len)
{
	if (num >= base_len)
	{
		printed_letters = ft_putn_unsigned(num / base_len, base, \
									printed_letters, base_len);
		if (printed_letters < 0)
			return (-1);
	}
	printed_letters = ft_putchar_pf(base[num % base_len], printed_letters);
	if (printed_letters < 0)
		return (-1);
	return (printed_letters);
}

static int	ft_overflow_pf(int printed_letters)
{
	printed_letters = ft_putstr_pf("-2147483648", printed_letters);
	if (printed_letters < 0)
		return (-1);
	return (printed_letters);
}

int	ft_putn_signed(int num, char *base, int printed_letters, int base_len)
{
	if (num == -2147483648)
		printed_letters = ft_overflow_pf(printed_letters);
	else
	{
		if (num < 0)
		{
			printed_letters = ft_putchar_pf('-', printed_letters);
			if (printed_letters < 0)
				return (-1);
			num *= -1;
		}
		if (num >= base_len)
		{
			printed_letters = ft_putn_signed(num / base_len, base, \
									printed_letters, base_len);
			if (printed_letters < 0)
				return (-1);
		}
		printed_letters = ft_putchar_pf(base[num % base_len], \
									printed_letters);
		if (printed_letters < 0)
			return (-1);
	}
	return (printed_letters);
}
