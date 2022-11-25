/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:09:40 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/25 22:37:24 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *input, ...);
int	ft_putchar_pf(int c, int printed_letters);
int	ft_putstr_pf(char *str, int printed_letters);
int	ft_putn_signed(int num, char *base, int printed_letters, int base_len);
int	ft_putn_unsigned(unsigned int num, char *base, int printed_letters, \
					unsigned int base_len);
int	ft_putptr(void *ptr, int printed_letters);

#endif
