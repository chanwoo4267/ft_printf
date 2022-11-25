/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:01:09 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/25 22:08:49 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(int c, int printed_letters)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (write(1, &ch, 1) < 0)
		return (-1);
	return (printed_letters + 1);
}

int	ft_putstr_pf(char *str, int printed_letters)
{
	unsigned long long	c;

	c = 0;
	if (!str)
		str = "(null)";
	while (str[c])
	{
		printed_letters = ft_putchar_pf(str[c], printed_letters);
		if (printed_letters < 0)
			return (-1);
		c++;
	}
	return (printed_letters);
}
