/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:44:34 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/25 22:37:03 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putn_uslong(unsigned long int num, char *base, \
					int printed_letters, unsigned int base_len)
{
	if (num >= base_len)
	{
		printed_letters = ft_putn_uslong(num / base_len, base, \
									printed_letters, base_len);
		if (printed_letters < 0)
			return (-1);
	}
	printed_letters = ft_putchar_pf(base[num % base_len], printed_letters);
	if (printed_letters < 0)
		return (-1);
	return (printed_letters);
}

int	ft_putptr(void *ptr, int printed_letters)
{
	printed_letters = ft_putstr_pf("0x", printed_letters);
	if (printed_letters < 0)
		return (-1);
	printed_letters = ft_putn_uslong((unsigned long int)ptr, \
								"0123456789abcdef", printed_letters, 16);
	if (printed_letters < 0)
		return (-1);
	return (printed_letters);
}
